#include <iostream>
#include <deque>
#include <cstring>
#include <list>
using namespace std;

class Graph{
	int V;
	list<int> *adj;
	public:
		Graph(int V);
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

	deque<int> q;
	list<int>::iterator i;

	int visited[V]; 
	memset(visited, 0 , sizeof(visited));

	q.push_back(s);

	while(!q.empty()){
		s = q.front();	q.pop_front();
		cout<<s<<" -> ";
		for(i = adj[s].begin(); i != adj[s].end(); i++){

			if(visited[*i]!=1)
				q.push_front(*i);
		}
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

/*
			0
	1				2
3		4		5		6
*/