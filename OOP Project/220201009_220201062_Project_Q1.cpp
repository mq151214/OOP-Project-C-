#include <iostream>
#include "SimpleGraph.h"
#include "SimpleGraph.cpp"
#include "SimpleNode.h"
#include "SimpleNode.cpp"

using namespace std;

int main() 
{
    SimpleGraph atr;
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
    cout << endl;
    atr.printGraphData();
    return 0;


    // int nodesNum;
    // cout << "How many nodes do you want to register ?" << endl;
    // cin >> nodesNum;
    // int nodeId[nodesNum];
    // for (int i = 0; i < nodesNum; i++) {
    //     cout << "Give ID of " << i + 1 << " node: " << endl;
    //     cin >> nodeId[i];
    //     attribute_1.addNode(nodeId[i]);
    // }
    // char check = 'y';
    // int n1,n2;
    // while (check == 'y') {
    //     cout << "Enter node IDs which you want to be edged together :" << endl;
    //     cin >> n1;
    //     for (int i=0;i<nodesNum;i++)
    //     {
    //         if (nodeId[i] == n1)
    //         {
    //             n1 = i;
    //             cin >> n2;
    //             for (int i=0;i<nodesNum;i++)
    //             {
    //                 if (nodeId[i] == n2)
    //                 {
    //                     n2 = i;
    //                     attribute_1.addEdge(nodeId[n1], nodeId[n2]);
    //                 }
    //             }        
    //         }
    //     }
       
    //     cout << "Do you want to make any other edge?.....(y/n)" << endl;
    //     cin >> check;
    // }
}
