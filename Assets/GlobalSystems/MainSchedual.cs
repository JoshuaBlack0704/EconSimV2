using System.Collections.Generic;
using Unity.Collections;
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
    static EntityArchetype ticketEntity;
    static EntityManager em;

    public class EventTicketHeapItem : IHeapItem<EventTicketHeapItem>
    {

        public static int maxId = 0;
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
            if ( timeAtExecute >= other.timeAtExecute )
            {
                compare = 1;
            }
            else if ( timeAtExecute < other.timeAtExecute )
            {
                compare = -1;
            }
            return -compare;
        }
        public EventTicketHeapItem( )
        {
            Id = maxId;
            maxId++;
            tickets[Id] = this;
        }
    }

    internal static Dictionary<int, EventTicketHeapItem> tickets;
    private static Heap<EventTicketHeapItem> schedualHeap;
    private static List<EventTicketHeapItem> ticketPool;
    private static int currentTicketIndex = 0;
    /// <summary>
    /// Performs all tasks needed to operate the heap
    /// </summary>
    /// <param name="timeToExecute">Using main schedual master time</param>
    /// <param name="type">0-WarpTo, 1-ArrivedAtTarget, </param>
    /// <param name="ship">If ticket is for a ship</param>

    public static EventTicketHeapItem AddToSystemV2(float timeToExecute, int type, Ship ship = null)
    {
        EventTicketHeapItem selectedTicket;
        if ( currentTicketIndex == 0 )
        {
            selectedTicket = new EventTicketHeapItem( );
        }
        else
        {
            currentTicketIndex--;
            selectedTicket = ticketPool[currentTicketIndex];
            ticketPool.RemoveAt(currentTicketIndex);
        }

        selectedTicket.timeAtExecute = timeToExecute + masterTime;
        selectedTicket.timeAtWrite = masterTime;
        selectedTicket.type = type;
        if ( ship != null )
        {
            selectedTicket.shipReference = ship;
            ship.currentTicket = selectedTicket;
        }

        Entity ticket = em.CreateEntity(ticketEntity);
        em.SetComponentData<EventTicketTimeAtWrite>(ticket, new EventTicketTimeAtWrite( ) { timeAtWrite = selectedTicket.timeAtWrite });
        em.SetComponentData<EventTicketTimeAtExecute>(ticket, new EventTicketTimeAtExecute( ) { timeAtExecute = selectedTicket.timeAtExecute });
        em.SetComponentData<EventTicketData>(ticket, new EventTicketData( ) { Id = selectedTicket.Id });
        return selectedTicket;
    }

    private void ExecuteTicketsV2( )
    {
        SchedualUpdater updater = World.DefaultGameObjectInjectionWorld.GetOrCreateSystem<SchedualUpdater>( );
        updater.Enabled = true;
        updater.Update( );
        NativeArray<Entity> ticketsToExecute = em.CreateEntityQuery(new ComponentType[] { ComponentType.ReadOnly<Execute>( ) }).ToEntityArray(Allocator.Temp);

        for ( int i = 0; i < ticketsToExecute.Length; i++ )
        {
            EventTicketHeapItem selectedTicket = tickets[em.GetComponentData<EventTicketData>(ticketsToExecute[i]).Id];

            if ( selectedTicket.type == 0 )
            {
                selectedTicket.shipReference.WarpNext( );
            }
            if ( selectedTicket.type == 1 )
            {
                selectedTicket.shipReference.ArrivedAtTarget( );
            }
            if ( selectedTicket.type == 2 )
            {
                selectedTicket.shipReference.ExploreSystem( );
            }
            if ( selectedTicket.type == 5 )
            {
                EconomicMethods.ReplaceAsteroid(selectedTicket.systemID);
            }



            //return Ticket to pool

            if ( currentTicketIndex + 1 >= ticketPool.Count )
            {
                if ( ticketPool.Contains(selectedTicket) )
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
        ticketsProcessedLastFrame = ticketsToExecute.Length;
        //Debug.Log(string.Format("Execute tickets found {0} tickets", ticketsProcessedLastFrame));
        em.DestroyEntity(ticketsToExecute);
        ticketsToExecute.Dispose( );
        updater.Enabled = false;
    }
    // Start is called before the first frame update
    void Start( )
    {
        schedualHeap = new Heap<EventTicketHeapItem>(1000000);
        ticketPool = new List<EventTicketHeapItem>(1000000);
        tickets = new Dictionary<int, EventTicketHeapItem>( );
        em = World.DefaultGameObjectInjectionWorld.EntityManager;
        ticketEntity = em.CreateArchetype(new ComponentType[] { typeof(EventTicketTimeAtWrite), typeof(EventTicketTimeAtExecute), typeof(EventTicketData) });
    }

    // Update is called once per frame
    void Update( )
    {
        //Need to implement
        if ( autoTimMultiplierAdjust )
        {
            if ( Time.deltaTime > .016f )
            {
                float dist = Mathf.Abs(.016f - Time.deltaTime);

                float result = 1 - Mathf.Clamp(Mathf.Sqrt(dist) * 3, 0, .95f);

                timeMultiplier = Mathf.Lerp(0, 1f, result);

            }
            else if ( Time.deltaTime < .016 && timeMultiplier < 1 )
            {
                timeMultiplier = Mathf.Lerp(timeMultiplier, 1, .05f);
            }
        }



        currentTime = masterTime;
        if ( pauseTime )
        {
            notPaused = false;
        }
        else if ( pauseTime == false )
        {
            notPaused = true;
        }
        if ( notPaused )
        {
            masterDeltaTime = Time.deltaTime * timeMultiplier;
            masterTime += masterDeltaTime;

        }
        ExecuteTicketsV2( );
    }
}

public struct Execute : IComponentData { }
public struct EventTicketTimeAtWrite : IComponentData
{
    public float timeAtWrite;
}
public struct EventTicketTimeAtExecute : IComponentData
{
    public float timeAtExecute;
}
public struct EventTicketData : IComponentData
{
    public int Id;
}

[DisableAutoCreation]
public class SchedualUpdater : SystemBase
{
    EntityCommandBufferSystem ecbs;
    protected override void OnCreate( )
    {
        base.OnCreate( );
        ecbs = World.GetOrCreateSystem<EndSimulationEntityCommandBufferSystem>( );
    }
    protected override void OnUpdate( )
    {
        EntityCommandBuffer.ParallelWriter ecb = ecbs.CreateCommandBuffer( ).AsParallelWriter( );
        float currentTime = MainSchedual.masterTime;
        Entities.ForEach((Entity ent, int entityInQueryIndex, in EventTicketTimeAtExecute timeAt) =>
        {

            if ( timeAt.timeAtExecute < currentTime )
            {
                ecb.AddComponent<Execute>(entityInQueryIndex, ent);
            }
        }).ScheduleParallel( );
        ecbs.AddJobHandleForProducer(Dependency);
        ecbs.Update( );
    }
}
