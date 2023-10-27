#include <iostream>
#include "AttributedGraph1.h"
using namespace std;

AttributedGraph1::AttributedGraph1()
{
    AttNodes = new AttributedNode1*[numNodes];
}
AttributedGraph1::~AttributedGraph1()
{
    delete[] AttNodes;
}
void AttributedGraph1::appendAttributes()
{
    int temp0;
        char temp1;
        cout<<"Give following attributes :"<<endl;
        for (int i=0;i<numNodes;i++)
        {
            AttNodes[i] = new AttributedNode1();
            cout<<"Node ID: "<<Nodes[i].getNodeId()<<endl;
            cout<<"Gender (Male (m) / Female (f)) : ";
            cin>>temp1;
            AttNodes[i]->setGender(temp1);
            cout<<"Age :";
            cin>>temp0;
            AttNodes[i]->setAge(temp0);
        }    
}
void AttributedGraph1::printGraphData()
{
    for (int i = 0; i < numNodes; i++) 
    {
        cout<<endl;
        cout<<"Node "<<i+1<<": "<<Nodes[i].getNodeId()<<endl;
        cout<<"Gender: "<<AttNodes[i]->getGender()<<endl;
        cout<<"Age: "<<AttNodes[i]->getAge()<<endl;
        printNeighbours(Nodes[i].getNodeId());
        cout<<endl;
    }        
}
int AttributedGraph1:: getnode()
{
    return numNodes;
}

//   void SendMessage()
//   {
//         // Implement the sendMessage() function for the derived class
//         cout << "Sending a message from the AttributedGraph1 class." << endl;
//     }