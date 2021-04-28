using System.Collections;
using System.Collections.Generic;
using Unity.Entities;
using UnityEngine;

public class MainSchedual : MonoBehaviour
{
    public float currentTime;
    public bool pauseTime;
    public static bool notPaused;
    public static float masterTime;
    public static float masterDeltaTime;
    [Range(0f, 100f)]
    public float timeMultiplier;
    public bool autoTimMultiplierAdjust;
    public int ticketsProcessed;
    public int ticketsProcessedLastFrame;

    public class EventTicketHeapItem: IHeapItem<EventTicketHeapItem>
    {
        public int Id { get; set; }
        public Ship shipReference { get; set; }
        public Entity entityReference;
        public float timeAtExecute { get; set; }
        public float timeAtWrite { get; set; }
        public int type { get; set; }
        public int systemID;

        private int heapIndex;
        public int HeapIndex { get { return heapIndex; } set { heapIndex = value; } }

        public int CompareTo(EventTicketHeapItem other)
        {
            int compare = 1;
            if (timeAtExecute >= other.timeAtExecute)
            {
                compare = 1;
            }
            else if (timeAtExecute < other.timeAtExecute)
            {
                compare = -1;
            }
            return -compare;
        }
    }
    private static Heap<EventTicketHeapItem> schedualHeap;
    private static List<EventTicketHeapItem> ticketPool;
    private static int currentTicketIndex = 0;
    internal static int maxTicketId = 0;
    /// <summary>
    /// Performs all tasks needed to operate the heap
    /// </summary>
    /// <param name="timeToExecute">Using main schedual master time</param>
    /// <param name="type">0-WarpTo, 1-ArrivedAtTarget, </param>
    /// <param name="ship">If ticket is for a ship</param>
    public static EventTicketHeapItem AddToHeap(float timeToExecute, int type, Ship ship = null)
    {
        EventTicketHeapItem selectedTicket;
        if (currentTicketIndex==0)
        {
            selectedTicket = new EventTicketHeapItem();
            selectedTicket.Id = maxTicketId;
            maxTicketId++;
        }
        else
        {
            currentTicketIndex--;
            selectedTicket = ticketPool[currentTicketIndex];
            ticketPool.RemoveAt(currentTicketIndex);
        }

        selectedTicket.timeAtExecute = timeToExecute+masterTime;
        selectedTicket.timeAtWrite = masterTime;
        selectedTicket.type = type;
        if (ship!=null)
        {
            selectedTicket.shipReference = ship;
            ship.currentTicket = selectedTicket;
        }

        schedualHeap.Add(selectedTicket);
        return selectedTicket;
    }
    internal static List<EventTicketHeapItem> selectedTickets = new List<EventTicketHeapItem>(10);
    internal static int currentSelectedTicketIndex = 0;
    private void ExecuteTickets()
    {
        while (schedualHeap.peakRoot() != null && schedualHeap.peakRoot().timeAtExecute<masterTime)
        {
            if (selectedTickets.Count == 0 || selectedTickets.Count <= currentSelectedTicketIndex)
            {
                selectedTickets.Add(schedualHeap.RemoveFirst());
            }
            else
            {
                selectedTickets[currentSelectedTicketIndex] = schedualHeap.RemoveFirst();
            }
            currentSelectedTicketIndex++;
        }

        for (int i = 0; i < currentSelectedTicketIndex; i++)
        {
            EventTicketHeapItem selectedTicket = selectedTickets[i];

            if (selectedTicket.type == 0)
            {
                selectedTicket.shipReference.WarpNext();
            }
            if (selectedTicket.type == 1)
            {
                selectedTicket.shipReference.ArrivedAtTarget();
            }
            if (selectedTicket.type == 2)
            {
                selectedTicket.shipReference.ExploreSystem();
            }
            if (selectedTicket.type == 5)
            {
                EconomicMethods.ReplaceAsteroid(selectedTicket.systemID);
            }



            //return Ticket to pool

            if (currentTicketIndex+1 >= ticketPool.Count)
            {
                if (ticketPool.Contains(selectedTicket))
                {
                    Debug.LogError("here");
                }
                ticketPool.Add(selectedTicket);
                currentTicketIndex++;
            }
            else
            {
                ticketPool[currentTicketIndex] = selectedTicket;
                currentTicketIndex++;
            }

            ticketsProcessed++;
        }
        ticketsProcessedLastFrame = currentSelectedTicketIndex;
        currentSelectedTicketIndex = 0;
    }
    // Start is called before the first frame update
    void Start()
    {
        schedualHeap = new Heap<EventTicketHeapItem>(1000000);
        ticketPool = new List<EventTicketHeapItem>(1000000);
    }

    // Update is called once per frame
    void Update()
    {
        //Need to implement
        if (autoTimMultiplierAdjust)
        {
            if (Time.deltaTime > .016f)
            {
                var dist = Mathf.Abs(.016f - Time.deltaTime);
                
                float result = 1 - Mathf.Clamp(Mathf.Sqrt(dist)*3, 0, .95f);

                timeMultiplier = Mathf.Lerp(0, 1f, result);

            }
            else if (Time.deltaTime < .016 && timeMultiplier < 1)
            {
                timeMultiplier = Mathf.Lerp(timeMultiplier, 1, .05f);
            }
        }
        
        
        
        currentTime = masterTime;
        if (pauseTime)
        {
            notPaused = false;
        }
        else if (pauseTime == false)
        {
            notPaused = true;
        }
        if (notPaused)
        {
            masterDeltaTime = Time.deltaTime * timeMultiplier;
            masterTime += masterDeltaTime;

        }
        ExecuteTickets();
    }
}


