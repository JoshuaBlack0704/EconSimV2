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
        public Dictionary<int, OOSTravelTicket> travelTickets;

        public void Simulate()
        {

        }
        public void StopSimulation()
        {

        }

        public OOSContainer(int _Id)
        {
            Id = _Id;
            isSimulated = false;
            travelTickets = new Dictionary<int, OOSTravelTicket>();
        }
    }
    internal Dictionary<int, OOSContainer> OOSContainers;
    List<float> timeSteps;

    public void PlanAndSchedualRoute(Ship ship)
    {
        //Initialization
        int timeStepsIndexNext = ship.wayPoints.Count-1;
        while (timeSteps.Count < ship.wayPoints.Count+1)
        {
            timeSteps.Add(0);
        }

        //Adding time until first warp
        UniverseSystem system = ship.masterAI.universe.systemWorks.GetSystem(ship.currentSystemId);
        var nextPos = system.connections[ship.wayPoints[ship.wayPoints.Count - 1]].Position;
        var distance = Vector3.Distance(ship.Position, nextPos);
        int timeStepsIndex = 0;
        timeSteps[timeStepsIndex] = (distance/ship.velocity)+MainSchedual.masterTime;
        
        //Going through waypoints
        for (int i = ship.wayPoints.Count-1; i >= 1; i--)
        {
            
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
            var spawn = systemNext.connections[previousStepCode].Position;
            var target = systemNext.connections[nextStepCode].Position;
            var distanceNext = Vector3.Distance(target, spawn);
            timeSteps[i-1] = (distanceNext / ship.velocity)+timeSteps[i];
        }

        for (int i = timeStepsIndex;i >= 0; i--)
        {
            var container = OOSContainers[ship.wayPoints[i]];
        }
    }

    public OOSSystem()
    {
        OOSContainers = new Dictionary<int, OOSContainer>();
        for (int i = 0; i <= UniverseGenerator.universe.maxPointId; i++)
        {
            OOSContainers[i] = new OOSContainer(i);
        }
        timeSteps = new List<float>();
    }
}
