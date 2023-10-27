#include "AttributedWeightedGraph.h"
#include <iostream>
using namespace std;

AttributedWeightedGraph::AttributedWeightedGraph() 
{
    numNodes = 0;
    numEdges = 0;
    Nodes = nullptr;
    edgeWeights = nullptr;
}

AttributedWeightedGraph::AttributedWeightedGraph(int nodes, int edges) 
{
    numNodes = nodes;
    numEdges = edges;
    Nodes = new SimpleNode[numNodes];
    edgeWeights = new int*[numNodes];
    for (int i = 0; i < numNodes; ++i) {
        edgeWeights[i] = new int[numNodes];
        for (int j = 0; j < numNodes; ++j)
            edgeWeights[i][j] = 0; // Initialize all weights to 0
    }
}

AttributedWeightedGraph::~AttributedWeightedGraph() 
{
    delete[] Nodes;
    for (int i = 0; i < numNodes; ++i)
        delete[] edgeWeights[i];
    delete[] edgeWeights;
}
void AttributedWeightedGraph::appendWeight(int nodeId1, int nodeId2, int weight) 
{
    // Find the indexes of the nodes
    int index1 = -1, index2 = -1;
    for (int i = 0; i < numNodes; i++) {
        if (nodeId1 == Nodes[i].getNodeId())
            index1 = i;
        if (nodeId2 == Nodes[i].getNodeId())
            index2 = i;
    }

    if (index1 != -1 && index2 != -1) {
        edgeWeights[index1][index2] = weight;
        edgeWeights[index2][index1] = weight;
    }
}

void AttributedWeightedGraph::printNeighbours(int nodeId) 
{
    // Find the index of the node
    int index = -1;
    for (int i = 0; i < numNodes; i++) {
        if (nodeId == Nodes[i].getNodeId()) {
            index = i;
            break;
        }
    }

    if (index != -1) 
    {
        std::cout << "The IDs of the neighbors of node " << nodeId << ": ";
        bool hasNeighbor = false;
        for (int i = 0; i < numNodes; i++) {
            if (edgeWeights[index][i] != 0) {
                cout << Nodes[i].getNodeId() << " (Weight: " << edgeWeights[index][i] << ") ";
                hasNeighbor = true;
            }
        }

        if (!hasNeighbor)
            cout << "None";

        cout << std::endl;
    }
}

void AttributedWeightedGraph::printGraphData() 
{
    for (int i = 0; i < numNodes; i++) {
        cout << "Node " << i + 1 << ": " << Nodes[i].getNodeId() << endl;
        printNeighbours(Nodes[i].getNodeId());
    }
}
