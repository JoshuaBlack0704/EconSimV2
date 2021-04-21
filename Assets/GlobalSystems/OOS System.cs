using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OOSSystem
{
    internal struct OOSTravelTicket
    {
        public int Id { get; set; }
        public Ship shipReference;
        public float timeAtArrival;
        public float timeAtDeparture;
        public int waypointIndex;
    }

    internal class OOSContainer
    {
        public int Id;
        public bool isSimulated;
        public List<OOSTravelTicket> travelTickets;

        public OOSContainer(int _Id)
        {
            Id = _Id;
            isSimulated = false;
            travelTickets = new List<OOSTravelTicket>();
        }
    }


    internal Dictionary<int, OOSContainer> OOSContainers;

    public bool PlanAndSchedualRoute(Ship ship)
    {
        
        float currentTime = MainSchedual.masterTime;
        bool shipEntersOOS = false;
        //We call this function on a ships WarpNext
        if (OOSContainers[ship.wayPoints[ship.wayPoints.Count-1]].isSimulated)
        {
            return shipEntersOOS;
        }
        else
        {
            shipEntersOOS = true;
        }

        if (ship.wayPoints.Count-1==0)
        {
            return false;
        }
        //Going through waypoints
        for (int i = ship.wayPoints.Count-1; i >= 1; i--)
        {
            //if we've hit a simulated system we set a ticket with a type 3 which executes a WarpToWaypointIndex method upon executing
            if (OOSContainers[ship.wayPoints[i]].isSimulated)
            {
                MainSchedual.AddToHeap(currentTime, 3, ship);
                ship.currentTicket.wayPointJumpIndex = i;
                return shipEntersOOS;
            }
            

            //We set up our next step
            int previousStepCode = 0;
            if (i+1>ship.wayPoints.Count-1)
            {
                previousStepCode = ship.currentSystemId;
            }
            else
            {
                previousStepCode = ship.wayPoints[i + 1];
            }
            int stepCode = ship.wayPoints[i];
            int nextStepCode = ship.wayPoints[i - 1];

            UniverseSystem systemNext = ship.masterAI.universe.systemWorks.GetSystem(stepCode);
            var distance = systemNext.connections[previousStepCode].connectionDistances[nextStepCode];
            float time = distance / ship.velocity;

            OOSContainers[systemNext.Id].travelTickets.Add(new OOSTravelTicket() 
            { 
                Id = ship.Id,
                shipReference = ship,
                timeAtArrival = currentTime,
                timeAtDeparture = currentTime + time,
                waypointIndex = i
            });

            currentTime += time;

            if (i-1==0)
            {
                MainSchedual.AddToHeap(currentTime, 3, ship);
                ship.currentTicket.wayPointJumpIndex = 0;
                return shipEntersOOS;
            }

        }

        return shipEntersOOS;

    }

    public void SimulateSystem(int Id)
    {
        var container = OOSContainers[Id];
        container.isSimulated = true;
        foreach (var ticket in container.travelTickets)
        {
            if (ticket.timeAtArrival<=MainSchedual.masterTime&&ticket.timeAtDeparture>MainSchedual.masterTime)
            {
                Ship ship = ticket.shipReference;
                UniverseSystem system = ship.masterAI.universe.systemWorks.GetSystem(Id);

                Vector3 target = system.connections[ship.wayPoints[ticket.waypointIndex - 1]].Position;
                Vector3 origin = ship.wayPoints.Count-1==ticket.waypointIndex ? system.connections[ship.currentSystemId].Position : system.connections[ship.wayPoints[ticket.waypointIndex + 1]].Position;

                Vector3 pos = Vector3.Lerp(origin, target, Mathf.InverseLerp(ticket.timeAtArrival, ticket.timeAtDeparture, MainSchedual.masterTime));

                ship.WarpToWayPointIndex(ticket.waypointIndex, true, pos);
                ticket.shipReference.GetNextPosition();
            }
            else if (ticket.timeAtArrival>MainSchedual.masterTime)
            {
                MainSchedual.AddToHeap(ticket.timeAtArrival, 3, ticket.shipReference);
            }
        }
        container.travelTickets.Clear();

    }

    public void StopSimulatingSystem(int Id)
    {
        OOSContainers[Id].isSimulated = false;
    }

    public OOSSystem()
    {
        OOSContainers = new Dictionary<int, OOSContainer>();
        for (int i = 0; i <= UniverseGenerator.universe.maxPointId; i++)
        {
            OOSContainers[i] = new OOSContainer(i);
            OOSContainers[i].isSimulated = false;
            if (i == UniverseGenerator.universe.selectedSystem)
            {
                //OOSContainers[i].isSimulated = true;
            }
        }
    }
}
