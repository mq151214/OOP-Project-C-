#ifndef SimpleGraph_H
#define SimpleGraph_H

#include "SimpleNode.h"

class SimpleGraph
{
    protected:
    int numNodes;
    int numEdges;
    SimpleNode* Nodes;

    public:
    SimpleGraph();
    SimpleGraph(int nodes,int edges);
    ~SimpleGraph();
    void addNode(int NodeId);
    void addEdge(int nodeId1,int nodeId2);
    void printNeighbours(int nodeId);
    // Condition: [* Apply runtime polymorphism for printGraphData() which override the SimpleGraph’s function]
    virtual void printGraphData();

    // Pure virtual function
    //virtual void SendMessage() = 0; 
    // Function to print data
    void Print();
};

#endif  