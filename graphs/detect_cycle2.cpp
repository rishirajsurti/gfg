#include <iostream>
#include <queue>
#include <list>
#include <algorithm>
using namespace std;

class Graph{
private:
	int V; //no. of vertices;
	list<int> *adj;
public:
	Graph(int V); //constructor
	void addEdge(int u, int v);
	bool detectCycle();
};

Graph::Graph(int V){
	this->V = V;
	adj = new list<int>[V];
}

void Graph::addEdge(int u, int v){
	adj[u].push_back(v);
}

bool Graph::detectCycle(){
	int s = 0;

	list<int> queue;
	list<int>::iterator it;

	bool *visited;
	visited = new bool[V];
	int i;
	for(i=0; i<V; i++)
		visited[i] = false;

	bool hasCycle=false;

	queue.push_back(s);

	s = queue.front();
	visited[s]=1;

	while(!queue.empty() && !hasCycle){
		s = queue.front();
		queue.pop_front();	

		for(it=adj[s].begin(); it!=adj[s].end(); it++){
			if(visited[*it]==true)
				hasCycle=true;
			else{
				queue.push_back(*it);
				visited[*it] = true;
			}
		}
	}
	return hasCycle;
}	

int main(){
	Graph g(3);
	g.addEdge(0,1);
	g.addEdge(1,2);
	g.addEdge(2,0);	
	cout<<g.detectCycle()<<endl;
	return 0;
}