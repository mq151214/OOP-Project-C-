#ifndef SIMPLENODE_H
#define SIMPLENODE_H

class SimpleNode
{
    int nodeId;
    int neighborCount;
    SimpleNode** arrNeighbors;

    public:
    SimpleNode();
    SimpleNode(int id,int count);
    ~SimpleNode();
    void addEdge(SimpleNode& obj);
    int getNeighborCount();
    SimpleNode** getNeighbor();
    int getNodeId();
    void setNodeId(int id);
    void setNeighborCount(int count);

};

#endif