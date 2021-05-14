using System;
using UnityEngine;

public class Heap<T> where T : IHeapItem<T>
{

    T[] items;
    public int currentItemCount;
    int _maxHeapSize;

    public Heap(int maxHeapSize)
    {
        items = new T[maxHeapSize];
        _maxHeapSize = maxHeapSize;
    }

    public T peakRoot( )
    {
        return items[0];
    }

    public void Add(T item)
    {
        if ( currentItemCount == _maxHeapSize )
        {
            DoubleHeapSize( );
        }
        item.HeapIndex = currentItemCount;
        items[currentItemCount] = item;
        SortUp(item);
        currentItemCount++;
    }
    public void DoubleHeapSize( )
    {
        T[] SecondArray = new T[items.Length * 2];
        foreach ( T item in items )
        {
            SecondArray[item.HeapIndex] = item;
        }
        items = SecondArray;
        _maxHeapSize *= 2;
        Debug.LogWarning("Main schedual head resized");
    }

    public T RemoveFirst( )
    {
        T firstItem = items[0];
        currentItemCount--;
        if ( currentItemCount < 0 )
        {
            Debug.LogError("here");
        }
        items[0] = items[currentItemCount];
        items[0].HeapIndex = 0;
        SortDown(items[0]);
        return firstItem;
    }

    public void UpdateItem(T item)
    {
        SortUp(item);
    }

    public int Count
    {
        get
        {
            return currentItemCount;
        }
    }

    public bool Contains(T item)
    {
        return Equals(items[item.HeapIndex], item);
    }

    void SortDown(T item)
    {
        while ( true )
        {
            int childIndexLeft = item.HeapIndex * 2 + 1;
            int childIndexRight = item.HeapIndex * 2 + 2;
            int swapIndex = 0;

            if ( childIndexLeft < currentItemCount )
            {
                swapIndex = childIndexLeft;

                if ( childIndexRight < currentItemCount )
                {
                    if ( items[childIndexLeft].CompareTo(items[childIndexRight]) < 0 )
                    {
                        swapIndex = childIndexRight;
                    }
                }

                if ( item.CompareTo(items[swapIndex]) < 0 )
                {
                    Swap(item, items[swapIndex]);
                }
                else
                {
                    return;
                }

            }
            else
            {
                return;
            }

        }
    }

    void SortUp(T item)
    {
        int parentIndex = (item.HeapIndex - 1) / 2;

        while ( true )
        {
            T parentItem = items[parentIndex];
            if ( item.CompareTo(parentItem) > 0 )
            {
                Swap(item, parentItem);
            }
            else
            {
                break;
            }

            parentIndex = (item.HeapIndex - 1) / 2;
        }
    }

    void Swap(T itemA, T itemB)
    {
        items[itemA.HeapIndex] = itemB;
        items[itemB.HeapIndex] = itemA;
        int itemAIndex = itemA.HeapIndex;
        itemA.HeapIndex = itemB.HeapIndex;
        itemB.HeapIndex = itemAIndex;
    }
}

public interface IHeapItem<T> : IComparable<T>
{
    int HeapIndex
    {
        get;
        set;
    }
}
