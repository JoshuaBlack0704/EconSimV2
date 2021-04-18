using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MainSchedual : MonoBehaviour
{
    public float currentTime;
    public bool pauseTime;
    public static bool notPaused;
    public static float masterTime;
    public static float masterDeltaTime;
    [Range(0, 100)]
    public float timeMultiplier = 1;
    public int ticketsProcessed;

    public class EventTicketHeapItem: IHeapItem<EventTicketHeapItem>
    {
        public int Id { get; set; }
        public Ship shipReference { get; set; }
        public float timeAtExecute { get; set; }
        public float timeAtWrite { get; set; }
        public int type { get; set; }

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

    public static void AddToHeap(float timeToExecute, int type, Ship ship = null)
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

        selectedTicket.timeAtExecute = timeToExecute;
        selectedTicket.timeAtWrite = masterTime;
        selectedTicket.type = type;
        if (ship!=null)
        {
            selectedTicket.shipReference = ship;
            ship.currentTicket = selectedTicket;
        }

        schedualHeap.Add(selectedTicket);
    }
    internal static List<EventTicketHeapItem> selectedTickets = new List<EventTicketHeapItem>(10);
    internal static int currentSelectedTicketIndex = 0;
    private void ExecuteTickets()
    {
        while (schedualHeap.peakRoot().timeAtExecute<masterTime && schedualHeap.peakRoot()!=null)
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
                selectedTicket.shipReference.PickNewTarget();
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
        currentSelectedTicketIndex = 0;
    }
    // Start is called before the first frame update
    void Start()
    {
        schedualHeap = new Heap<EventTicketHeapItem>(1000000);
        ticketPool = new List<EventTicketHeapItem>(1000000);
        timeMultiplier = 1;
    }

    // Update is called once per frame
    void Update()
    {
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
            masterTime += Time.deltaTime * timeMultiplier;
            masterDeltaTime = Time.deltaTime * timeMultiplier;
        }
        ExecuteTickets();
    }
}


