#include <iostream>
#include "AttributedGraph2.h"

using namespace std;

AttributedGraph2::AttributedGraph2()
{
    AttNode2 = new AttributedNode2*[numNodes];
}

//condition: [* you have to explicitly mention to call the Base class's parameterized constructor when Derived class's parameterized constructor is called to maintain order.]
AttributedGraph2::AttributedGraph2(int nodes, int edges):SimpleGraph(nodes,edges)
{
    AttNode2 = new AttributedNode2*[numNodes];
}

AttributedGraph2::~AttributedGraph2()
{
    delete Nodes;
}

void AttributedGraph2::appendAttributes(int nodeid,string profession, string location)
{
    for (int i=0;i<numNodes;i++)
        {
            if(Nodes[i].getNodeId() == nodeid)
            {
                AttNode2[i] = new AttributedNode2();
                AttNode2[i]->setCityName(location);
                AttNode2[i]->setProfession(profession);
            }
        }
}

void AttributedGraph2::printNeighbors(int nodeId)
{
        printNeighbours(nodeId);
        for(int i=0;i<numNodes;i++)
        {
            if (Nodes[i].getNodeId()==nodeId)
            {
                cout<<endl<<"Node ID: "<<nodeId<<endl;
                cout<<"City Name: "<<AttNode2[i]->getCityName();
                cout<<"Profession: "<<AttNode2[i]->getProfession();
            }
        }
}

void AttributedGraph2::printGraphData()
{
     
    for (int i = 0; i < numNodes; i++) 
    {
        cout<<endl;
        cout<<"Node "<<i+1<<": "<<Nodes[i].getNodeId()<<endl;
        cout<<"City Name: "<<AttNode2[i]->getCityName()<<endl;
        cout<<"Profession: "<<AttNode2[i]->getProfession()<<endl;
        printNeighbours(Nodes[i].getNodeId());
        cout<<endl;
    }          
    

}

// void SendMessage()
//   {
//         // Implement the sendMessage() function for the derived class
//         cout << "Sending a message from the AttributedGraph1 class." << endl;
//     }