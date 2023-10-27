#include <iostream>
#include "SimpleNode.h"
using namespace std;

SimpleNode::SimpleNode() 
    {
        nodeId = 0;
        neighborCount = 0;
        arrNeighbors = nullptr;
    }

    SimpleNode::SimpleNode(int id, int count) 
    {
        nodeId = id;
        neighborCount = count;
        arrNeighbors = new SimpleNode*[neighborCount];
    }

    SimpleNode::~SimpleNode() 
    {
        delete[] arrNeighbors;
    }

    void SimpleNode::addEdge(SimpleNode& obj) 
    {
        int count=0;
        for (int i=0;i<neighborCount;i++)
        {
            if (arrNeighbors[i]->getNodeId()==obj.getNodeId())
            {
                count++;
            }
        }
        if (count ==0)
        {
            SimpleNode** newArr = new SimpleNode*[neighborCount + 1];
            for (int i = 0; i < neighborCount; i++) 
            {
               newArr[i] = arrNeighbors[i];
            }
            newArr[neighborCount] = &obj;
            delete[] arrNeighbors;
            arrNeighbors = newArr;
            neighborCount++;
        }    
    }

    

    int SimpleNode::getNeighborCount()
    {
        return neighborCount;
    }

    SimpleNode** SimpleNode::getNeighbor()
    {
        return arrNeighbors;
    }

    int SimpleNode::getNodeId()
    {
        return nodeId;
    }

    void SimpleNode::setNodeId(int a) 
    {
        nodeId = a;
    }

    void SimpleNode::setNeighborCount(int a) 
    {
        neighborCount = a;
    }
