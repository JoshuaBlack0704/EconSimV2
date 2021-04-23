using System.Collections;
using System.Collections.Generic;
using System.Linq;
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
        public Dictionary<int, OOSTravelTicket> travelTickets;

        public OOSContainer(int _Id)
        {
            Id = _Id;
            isSimulated = false;
            travelTickets = new Dictionary<int, OOSTravelTicket>();
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
            ShipEntersOOSSpace(ship);
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

            OOSContainers[systemNext.Id].travelTickets.Add(ship.Id, new OOSTravelTicket() 
            { 
                Id = ship.Id,
                shipReference = ship,
                timeAtArrival = currentTime,
                timeAtDeparture = currentTime + time,
                waypointIndex = i
            });

            OOSSpace[ship.Id].containersWithTravelTicketsFor.Add(systemNext.Id);

            currentTime += time;

            

        }

        AddOOSTicket(currentTime, ship, 0);

        return shipEntersOOS;

    }

    /// <summary>
    /// We 
    /// </summary>
    /// <param name="index"></param>
    /// <param name="useIntermidiate"></param>
    /// <param name="intermidiatePos"></param>
    public void MoveShipToWaypointIndex(Ship ship, int index, bool useIntermidiate, Vector3 intermidiatePos, bool exitShipFromOOSSpace = true)
    {
        UniverseSystem targetSystemJump = ship.masterAI.universe.systemWorks.GetSystem(ship.wayPoints[index]);
        UniverseSystem currentSystem;
        if (index + 1 > ship.wayPoints.Count - 1)
        {
            currentSystem = ship.masterAI.universe.systemWorks.GetSystem(ship.currentSystemId);

        }
        else
        {
            currentSystem = ship.masterAI.universe.systemWorks.GetSystem(ship.wayPoints[index + 1]);
        }

        if (ship.masterAI.universe.inSystem == false)
        {
            Debug.DrawLine(targetSystemJump.definingPoint.Position, ship.masterAI.universe.systemWorks.GetSystem(ship.currentSystemId).definingPoint.Position, Color.green);
        }

        targetSystemJump.containedShips.Add(ship.Id, ship);
        if (exitShipFromOOSSpace)
        {
            ShipExitsOOSSpace(ship.Id);
        }

        if (targetSystemJump.connections.ContainsKey(currentSystem.Id) != true)
        {
            MonoBehaviour.print("current system: " + ship.currentSystemId);
            MonoBehaviour.print("targetJump system: " + ship.wayPoints[ship.wayPoints.Count - 1]);
            MonoBehaviour.print("Final target system: " + ship.targetSystem);
            foreach (var item in targetSystemJump.connections.Keys)
            {
                MonoBehaviour.print(string.Format("Target system: {0} contains connection to system: {1}", targetSystemJump.Id, item));
                if (targetSystemJump.Id != ship.wayPoints[ship.wayPoints.Count - 1])
                {
                    Debug.LogError("here");
                }
            }
            foreach (var item in currentSystem.connections.Keys)
            {
                MonoBehaviour.print(string.Format("current system: {0} contains connection to system: {1}", ship.currentSystemId, item));

            }
            foreach (var item in ship.wayPoints)
            {
                MonoBehaviour.print("Waypoint step: " + item);
            }
        }

        if (useIntermidiate)
        {
            ship.Position = intermidiatePos;
        }
        else
        {
            ship.Position = targetSystemJump.connections[currentSystem.Id].Position;
        }




        if (ship.masterAI.universe.inSystem && targetSystemJump.Id == ship.masterAI.universe.selectedSystem)
        {
            ship.CreateEntityFor(true);
        }

        ship.currentSystemId = targetSystemJump.Id;
        ship.wayPoints.RemoveRange(index, (ship.wayPoints.Count) - index);
        ship.FlyToNextTarget();
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


        foreach (var ticket in container.travelTickets.Values)
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

                MainSchedual.OOSSystem.MoveShipToWaypointIndex(ship ,ticket.waypointIndex, true, pos, false);
                //ticket.shipReference.GetNextPosition();
            }
            else if (ticket.timeAtArrival>MainSchedual.masterTime)
            {
                AddOOSTicket(ticket.timeAtArrival, ticket.shipReference, ticket.waypointIndex);
            }
        }
        var shipList = container.travelTickets.Keys.ToArray();
        foreach (var shipKey in shipList)
        {
            ShipExitsOOSSpace(shipKey);
        }


        container.travelTickets.Clear();

    }

    public void StopSimulatingSystem(int Id)
    {
        OOSContainers[Id].isSimulated = false;
    }



    //OOS space framework
    internal class OOSSpaceShip
    {
        public int Id { get; set; }
        public List<int>  containersWithTravelTicketsFor { get; set; }

        public OOSSpaceShip(int id)
        {
            Id = id;
            containersWithTravelTicketsFor = new List<int>();
        }
    }

    internal Dictionary<int, OOSSpaceShip> OOSSpace;
    internal void ShipEntersOOSSpace(Ship ship)
    {
        OOSSpaceShip OOSship;
        if (OOSSpace.TryGetValue(ship.Id, out OOSship)!=true)
        {
            OOSSpace[ship.Id] = new OOSSpaceShip(ship.Id);
            OOSship = OOSSpace[ship.Id];
        }

        var system = ship.masterAI.universe.systemWorks.GetSystem(ship.currentSystemId);
        system.containedShips.Remove(ship.Id);
    }
    internal void ShipExitsOOSSpace(int Id)
    {
        var ship = OOSSpace[Id];
        foreach (var item in ship.containersWithTravelTicketsFor)
        {
            var container = OOSContainers[item];
            container.travelTickets.Remove(ship.Id);

        }
    }

    internal void AddContainerToOOSShip(int Id, OOSSpaceShip ship)
    {
        ship.containersWithTravelTicketsFor.Add(Id);
    }


    /// <summary>
    /// 
    /// </summary>
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
        OOSSpace = new Dictionary<int, OOSSpaceShip>();
    }
}
