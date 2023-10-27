#include <iostream>
#include "SimpleGraph.h"
using namespace std;

SimpleGraph::SimpleGraph() 
    {
        numNodes = 0;
        numEdges = 0;
        Nodes = nullptr;
    }

SimpleGraph::SimpleGraph(int nodes, int edges) 
    {
        numNodes = nodes;
        numEdges = edges;
        Nodes = new SimpleNode[numNodes];
    }

SimpleGraph::~SimpleGraph() 
    {
        delete[] Nodes;
    } 

void SimpleGraph::addNode(int NodeId)
    {
        SimpleNode* newArr = new SimpleNode[numNodes + 1];
        for (int i = 0; i < numNodes; i++) {
            newArr[i] = Nodes[i];
        }
        newArr[numNodes].setNodeId(NodeId);
        delete[] Nodes;
        Nodes = newArr;
        numNodes++;
    }

void SimpleGraph::addEdge(int nodeId1, int nodeId2)
    {
        for (int i = 0; i < numNodes; i++)
        {
            if (nodeId1 == Nodes[i].getNodeId())
            {
                for (int j = 0; j < numNodes; j++)
                {
                    if (nodeId2 == Nodes[j].getNodeId())
                    {
                        Nodes[i].addEdge(Nodes[j]);
                        Nodes[j].addEdge(Nodes[i]);
                        return;
                    }
                }
            }
        }
    }


void SimpleGraph::printNeighbours(int nodeId)
{
    for (int i = 0; i < numNodes; i++)
    {
        if (nodeId == Nodes[i].getNodeId())
        {
            cout<<"The IDs of the neighbors of this nodeID are:  " ;
            if (Nodes[i].getNeighborCount()==0)
            {
                cout<<"None";
            }
            for (int j = 0; j < Nodes[i].getNeighborCount(); j++)
            {  
                int a;
                a = Nodes[i].getNeighbor()[j]->getNodeId(); 
                cout<<a<<"  ";
        }
    }
    // cout<<endl;
}
}

void SimpleGraph::printGraphData() 
    {
        int a;
        for (int i = 0; i < numNodes; i++) 
        {   
            cout<<"Node "<<i+1<<" : "<<"  ";
            cout<<Nodes[i].getNodeId()<<endl;
            printNeighbours(Nodes[i].getNodeId());
            cout<<endl;
            }
    }

    void SimpleGraph::Print() 
    {
    cout << "I am not a vitual function. I am from SimpleGraph Class." << endl;
    }
