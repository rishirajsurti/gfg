#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

class Graph{
private:
	int V;
	list<int> *adj;
public:
	Graph(int v);
	void addEdge(int u, int v);
	void DFS(int s);
};

Graph::Graph(int V){
	this->V = V;
	adj = new list<int>[V];
}
void Graph::addEdge(int u, int v){
	adj[u].push_back(v);
}

void Graph::DFS(int s){

	bool *visited = new bool[V];
	int i;
	for(i=0; i<V; i++)
		visited[i] = false;

	list<int> queue;
	queue.push_back(s);
	visited[s] = true;

	list<int>::iterator it;

	while(!queue.empty()){

		
		for(it = adj[s].begin(); it!= adj[s].end(); it++){

			if(!visited[*it]){
				queue.push_back(*it);
				visited[*it] = true;
			}
		}

		s = queue.back();
		cout<<s<<"<--";
		queue.pop_back();


	}
}

int main(){
	Graph g(7);
	g.addEdge(0,1);
	g.addEdge(0,2);

	g.addEdge(1,3);
	g.addEdge(1,4);
	g.addEdge(2,5);
	g.addEdge(2,6);
	g.DFS(0);
	return 0;
}