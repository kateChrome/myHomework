#ifndef GRAPH_H
#define GRAPH_H

struct Graph;
typedef struct Graph Graph;

Graph* createGraph(int numberOfVertex);
void removeGraph(Graph* graph);
void setGraphAdjacencyMatrix(Graph* graph, int** edgesOfTheGraph, int numberOfEdges);
void printGraphAdjacencyMatrix(Graph* graph);
void setClassesToVertix(Graph* graph, int* classesOfVertix, int numberOfClasses);
void printVertixByClasses(Graph* graph);

#endif
