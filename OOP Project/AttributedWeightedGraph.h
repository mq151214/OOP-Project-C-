#ifndef ATTRIBUTEDWEIGHTEDGRAPH_H
#define ATTRIBUTEDWEIGHTEDGRAPH_H

#include "AttributedGraph1.h"
#include "AttributedGraph2.h"
#include "SimpleGraph.h"

class AttributedWeightedGraph :public virtual AttributedGraph1 , public virtual AttributedGraph2 
{
private:
  int** edgeWeights; // 2D array to store edge weights

public:
  AttributedWeightedGraph();
  ~AttributedWeightedGraph();
  void appendWeight(int nodeId1, int nodeId2, int weight);
  void printNeighbors(int nodeId);
  void printData();
};

#endif // ATTRIBUTEDWEIGHTEDGRAPH_H
