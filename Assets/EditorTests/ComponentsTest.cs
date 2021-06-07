using System.Collections;
using System.Collections.Generic;
using NUnit.Framework;
using UnityEngine;
using UnityEngine.TestTools;
using Unity.Mathematics;
using ECSTesting.Components.Tickets;
public class ComponentsTest
{
    // A Test behaves as an ordinary method
    [Test]
    public void NewTestScriptSimplePasses()
    {
        // Use the Assert class to test conditions
        var timeData = new TimeData();
        Assert.AreEqual(0, timeData.timeAtExecute);
    }
}
