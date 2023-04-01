#include<iostream>
#include <list>
#include <limits.h>
using namespace std;
 

class Graph
{
       
    int V;  
       
    list<int> *adj; 
    bool isCyclicUtil(int v, bool visited[],int parent);
public:
       
    Graph(int V);  
       
    void addEdge(int v, int w);
      
    bool isCyclic(); 
};
 
Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}
 
void Graph::addEdge(int v, int w)
{
        
    adj[v].push_back(w);
       
    adj[w].push_back(v);
}

bool Graph::isCyclicUtil(int v,
                bool visited[], int parent)
{
        
    visited[v] = true;
 
    
    for(auto nbr:adj[v])
    {
               
        if (!visited[nbr]) // go and recursively visit neighbour
        {
           if (isCyclicUtil(nbr, visited, v))
              return true;
        }
         
        else if (nbr != parent)
           return true;
    }
    return false;
}
 

bool Graph::isCyclic()
{
       
    bool *visited = new bool[V];
    for (int i = 0; i < V; i++)
    {
        visited[i] = false;
    }
 
    

    return isCyclicUtil(0, visited, -1);
    
}
 

int main()
{
    Graph g1(5);
    g1.addEdge(1, 0);
    g1.addEdge(0, 2);
    g1.addEdge(2, 3);
    g1.addEdge(3, 4);
    // g1.addEdge(3, 4);
    g1.isCyclic() ? cout << "Graph contains cycle\n" : cout << "Graph doesn't contain cycle\n";
 
    return 0;
}