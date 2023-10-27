#include <iostream>
#include "SimpleGraph.h"
#include "SimpleGraph.cpp"
#include "SimpleNode.h"
#include "SimpleNode.cpp"
#include "AttributedNode1.h"
#include "AttributedNode1.cpp"
#include "AttributedGraph1.h"
#include "AttributedGraph1.cpp"

using namespace std;

int main() 
{
    AttributedGraph1 attribute_1;
    SimpleGraph *s = &attribute_1;
   
    attribute_1.addNode(101);
    attribute_1.addNode(102);
    attribute_1.addNode(103);
    attribute_1.addNode(104);
    attribute_1.addNode(105);

    attribute_1.addEdge(101,102);
    attribute_1.addEdge(101,103);
    attribute_1.addEdge(101,104);
    attribute_1.addEdge(101,105);
    attribute_1.addEdge(102,103);
    attribute_1.addEdge(102,104);
    attribute_1.addEdge(102,105);
    attribute_1.addEdge(103,104);
    attribute_1.addEdge(103,105);
    attribute_1.addEdge(104,105);

    attribute_1.appendAttributes();

    s->printGraphData();

    //s->SendMessage();
    return 0;
}
