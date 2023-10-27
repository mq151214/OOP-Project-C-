#ifndef ATTRIBUTEDGRAPH2_H
#define ATTRIBUTEDGRAPH2_H

#include "AttributedNode2.h"
#include "SimpleGraph.h"

class AttributedGraph2:public SimpleGraph
{
    private:
        AttributedNode2** AttNode2;
    public:
        AttributedGraph2();
        AttributedGraph2(int nodes,int edges);
        ~AttributedGraph2();
        void appendAttributes(int nodeid,string profession, string location);
        void appendAttributes();
        void printNeighbors(int nodeId);
        void printGraphData();
        //void SendMessage();
};

#endif