using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MainSchedual : MonoBehaviour
{
    
    public class EventTicketHeapItem: IHeapItem<EventTicketHeapItem>
    {
        public Ship shipReference { get; set; }
        public float timeToExecute { get; set; }
        public float timeAtWrite { get; set; }
        public int type { get; set; }

        private int heapIndex;
        public int HeapIndex { get { return heapIndex; } set { heapIndex = value; } }

        public int CompareTo(EventTicketHeapItem other)
        {
            int compare = 1;
            if (timeToExecute >= other.timeToExecute)
            {
                compare = 1;
            }
            else if (timeToExecute < other.timeToExecute)
            {
                compare = -1;
            }
            return -compare;
        }
    }
    private static Heap<EventTicketHeapItem> schedualHeap;
    private static List<EventTicketHeapItem> ticketPool;
    private static int currentTicketIndex = 0;


    public static void AddToHeap(float timeToExecute, int type, Ship ship = null)
    {
        EventTicketHeapItem selectedTicket;
        if (currentTicketIndex==0)
        {
            selectedTicket = new EventTicketHeapItem();
        }
        else
        {
            currentTicketIndex--;
            selectedTicket = ticketPool[currentTicketIndex];
        }

        selectedTicket.timeToExecute = timeToExecute;
        selectedTicket.timeAtWrite = Time.time;
        selectedTicket.type = type;
        if (ship!=null)
        {
            selectedTicket.shipReference = ship;
            ship.currentTicket = selectedTicket;
        }

        schedualHeap.Add(selectedTicket);
    }
    internal static List<EventTicketHeapItem> selectedTickets = new List<EventTicketHeapItem>(10);
    private static void ExecuteTickets()
    {
        while (schedualHeap.peakRoot().timeToExecute<Time.time && schedualHeap.peakRoot()!=null)
        {
            selectedTickets.Add(schedualHeap.RemoveFirst());
        }

        for (int i = 0; i < selectedTickets.Count; i++)
        {
            EventTicketHeapItem selectedTicket = selectedTickets[i];

            if (selectedTicket.type == 0)
            {
                selectedTicket.shipReference.PickNewTarget();
            }



            //return Ticket to pool

            if (currentTicketIndex+1 >= ticketPool.Count)
            {
                ticketPool.Add(selectedTicket);
                currentTicketIndex++;
            }
            else
            {
                ticketPool[currentTicketIndex] = selectedTicket;
                currentTicketIndex++;
            }
        }
        selectedTickets.Clear();
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
        ExecuteTickets();
    }
}


