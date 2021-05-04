using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class KDtree<T> where T : IKDItem<T>
{
    //This is a KD tree system that takes a geberic class T that contains a list of dimensions and an Integer Id
    int maxKDnodeId = 0;

    //KDNode with a constrctor for taking parents and children
    public class KDNode
    {
        public int Id { get; set; }
        public KDNode parent { get; set; }
        public KDNode[] branches { get; set; }
        public T contents { get; set; }

        public KDNode( KDtree<T> KDtree, T Contents, KDNode Parent = null, KDNode leftChild = null, KDNode rightChild = null )
        {
            Id = KDtree.maxKDnodeId;
            KDtree.maxKDnodeId++;
            branches = new KDNode[2];
            if (Parent != null)
            {
                parent = Parent;
            }
            else
            {
                parent = null;
            }
            if (leftChild != null)
            {
                branches[0] = leftChild;
            }
            if (rightChild != null)
            {
                branches[1] = rightChild;
            }
            contents = Contents;

        }
    }

    KDNode rootNode;


    /// <summary>
    /// This method will progress through the kd tree and place the item and return true.
    /// If the item is not unique it will not be placed and false will be returned
    /// </summary>
    /// <param name="item"></param>
    /// <returns>Bool</returns>
    public bool addItemToKdTree( T item )
    {
        //We start at the root node
        KDNode currentNode = rootNode;
        KDNode parentNode = rootNode;
        int dimensionIndex = 0;

        while (true)
        {
            //We progress to the next dimension
            dimensionIndex++;
            if (dimensionIndex >= item.dimensions.Count)
            {
                dimensionIndex = 0;
            }
            //We add the current node to the points kd address
            item.KDAddress.Add(currentNode.Id);
            //We execute a compare to action housed in the unique points class
            int result = item.CompareToWithIndex(currentNode.contents, dimensionIndex);
            if (result == 2)
            {
                //If result is 2 then the point is Identical to the point in the Node
                return false;
            }
            else if (result == -1)
            {
                //If result is -1 or 0 then we progress to the left branch
                parentNode = currentNode;
                currentNode = currentNode.branches[0];
                if (currentNode == null)
                {
                    //If current node is null then weve hit the bottom of the tree and are finished
                    KDNode newNode = new KDNode(this, item, parentNode);
                    parentNode.branches[0] = newNode;
                    item.KDAddress.Add(newNode.Id);
                    return true;
                }
            }
            else if (result == 0)
            {
                parentNode = currentNode;
                currentNode = currentNode.branches[0];
                if (currentNode == null)
                {
                    KDNode newNode = new KDNode(this, item, parentNode);
                    parentNode.branches[0] = newNode;
                    item.KDAddress.Add(newNode.Id);
                    return true;
                }
            }
            else if (result == 1)
            {
                //If result is 1 then we progress to the right branch
                parentNode = currentNode;
                currentNode = currentNode.branches[1];
                if (currentNode == null)
                {
                    KDNode newNode = new KDNode(this, item, parentNode);
                    parentNode.branches[1] = newNode;
                    item.KDAddress.Add(newNode.Id);
                    return true;
                }
            }

        }
    }




    public KDtree( T rootObject )
    {
        rootNode = new KDNode(this, rootObject);
    }

}

public interface IKDItem<T> : IKDCompare<T>
{
    int Id { get; set; }
    List<float> dimensions { get; set; }
    List<int> KDAddress { get; set; }
}

public interface IKDCompare<T>
{
    /// <summary>
    /// Returns -1 for less, 0 for same, 1 for more, 2 for identical accross all dimensions in list
    /// </summary>
    /// <param name="item"></param>
    /// <param name="dimensionIndex"></param>
    /// <returns></returns>
    int CompareToWithIndex( T item, int dimensionIndex );
}


