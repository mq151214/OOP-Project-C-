#include <iostream>
#include "SimpleGraph.h"
#include "SimpleGraph.cpp"
#include "SimpleNode.h"
#include "SimpleNode.cpp"
#include "AttributedNode2.h"
#include "AttributedNode2.cpp"
#include "AttributedGraph2.h"
#include "AttributedGraph2.cpp"
using namespace std;

int main()
{
    AttributedGraph2 atr;
    SimpleGraph *ptr = &atr;

    atr.addNode(101);
    atr.addNode(102);
    atr.addNode(103);
    atr.addNode(104);
    atr.addNode(105);

    atr.addEdge(101,102);
    atr.addEdge(101,103);
    atr.addEdge(101,104);
    atr.addEdge(101,105);
    atr.addEdge(102,103);
    atr.addEdge(102,104);
    atr.addEdge(102,105);
    atr.addEdge(103,104);
    atr.addEdge(103,105);
    atr.addEdge(104,105);

    atr.appendAttributes(101,"Driver","Rawalpindi");
    atr.appendAttributes(102,"Thief","Karachi");
    atr.appendAttributes(103,"Peeker","Lahore");
    atr.appendAttributes(104,"Engineer","Hyderabad");
    atr.appendAttributes(105,"Doctor","Islamabad");
    
    // Condition: [* Apply runtime polymorphism for printGraphData() which override the SimpleGraph’s function]
    ptr->printGraphData();
    //ptr->SendMessage();




}
