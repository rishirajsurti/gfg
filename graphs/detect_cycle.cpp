#include <iostream>
#include <deque>
#include <list>
#include <cstring>
using namespace std;

class Graph{
	int V;
	list<int> *adj;
public:
	Graph(int V);
	void addEdge(int u, int v);
	bool hasCycle();
};

Graph::Graph(int V){
	this->V = V;
	adj = new list<int>[V] ;
}

void Graph::addEdge(int u, int v){
	adj[u].push_back(v);
}

bool Graph::hasCycle(){
	int visited[V];
	memset(visited, 0, sizeof(visited));
	deque<int> c;
	list<int>::iterator i;
	int s;
	i = adj[0].begin();
	s = (*i);
	c.push_back(s);
	bool cycle = false;
	
	
	while(!c.empty() ){
		s = c.front();	c.pop_front();
		visited[s] = 1;
		for(i=adj[s].begin(); i!=adj[s].end(); i++){
			
			if(visited[*i] == 1)
				cycle = true;
			else
				c.push_back(*i);
		}
		if(cycle)
			break;
	}
	return cycle;
}

int main(){
	// Create a graph given in the above diagram
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
    cout<<g.hasCycle()<<endl;
    return 0;
 
}