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
    internal class OOSSpaceShip
    {
        public int Id { get; set; }
        public Dictionary<int, OOSTravelTicket> outstandingTravelTickets { get; set; }
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

    void AddOOSTicket(float timeAtActivate, Ship ship, int shipsWaypointIndex)
    {
        MainSchedual.AddToHeap(timeAtActivate, 3, ship);
        ship.currentTicket.wayPointJumpIndex = shipsWaypointIndex;
    }

    internal Dictionary<int, OOSContainer> OOSContainers;
    /// <summary>
    /// We call this function on a ships WarpNext
    /// </summary>
    /// <param name="ship"></param>
    /// <returns></returns>
    public bool PlanAndSchedualRoute(Ship ship)
    {

        float currentTime = MainSchedual.masterTime;
        bool shipEntersOOS = false;

        if (OOSContainers[ship.wayPoints[ship.wayPoints.Count-1]].isSimulated || ship.wayPoints.Count - 1 == 0)
        {
            return shipEntersOOS;
        }
        else
        {
            shipEntersOOS = true;
        }

        //Going through waypoints
        for (int i = ship.wayPoints.Count-1; i >= 1; i--)
        {
            //if we've hit a simulated system we set a ticket with a type 3 which executes a WarpToWaypointIndex method upon executing
            if (OOSContainers[ship.wayPoints[i]].isSimulated)
            {
                AddOOSTicket(currentTime, ship, i);
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

            

        }

        AddOOSTicket(currentTime, ship, 0);

        return shipEntersOOS;

    }

    /// <summary>
    /// 
    /// </summary>
    /// <param name="Id"></param>
    public void SimulateSystem(int Id)
    {
        var container = OOSContainers[Id];
        container.isSimulated = true;
        UniverseSystem system = UniverseGenerator.universe.systemWorks.GetSystem(Id);


        foreach (var ticket in container.travelTickets)
        {
            if (ticket.timeAtArrival<=MainSchedual.masterTime&&ticket.timeAtDeparture>MainSchedual.masterTime)
            {
                Ship ship = ticket.shipReference;

                Vector3 target = system.connections[ship.wayPoints[ticket.waypointIndex - 1]].Position;
                Vector3 origin = ship.wayPoints.Count-1==ticket.waypointIndex ? system.connections[ship.currentSystemId].Position : system.connections[ship.wayPoints[ticket.waypointIndex + 1]].Position;
                Vector3 pos = Vector3.Lerp(origin, target, Mathf.InverseLerp(ticket.timeAtArrival, ticket.timeAtDeparture, MainSchedual.masterTime));

                if (ship.wayPoints[ticket.waypointIndex]!=Id)
                {
                    Debug.LogError("here");
                }

                ship.WarpToWayPointIndex(ticket.waypointIndex, true, pos);
                //ticket.shipReference.GetNextPosition();
            }
            else if (ticket.timeAtArrival>MainSchedual.masterTime)
            {
                AddOOSTicket(ticket.timeAtArrival, ticket.shipReference, ticket.waypointIndex);
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
