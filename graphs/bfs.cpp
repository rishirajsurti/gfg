#include <iostream>
#include <list>
#include <cstring>
#include <deque>
#include <algorithm>
using namespace std;

class Graph{
	int V; //no. of edges
	list<int> *adj; //pointer to array containing adjacency list

public:
	Graph(int V); //constructor
	void addEdge(int v, int w);
	void BFS(int s);
};

Graph::Graph(int V){
	this->V = V;
	adj = new list<int>[V];
}

void Graph::addEdge(int v, int w){
	adj[v].push_back(w);
}

void Graph::BFS(int s){

	int visited[V];
	deque<int> nodes;
	memset(visited, 0, sizeof(visited));
	
	nodes.push_back(s);
	list<int>::iterator i;

	while(!nodes.empty()){
		
		s = nodes.front();		nodes.pop_front();
		visited[s] = 1;
		cout<<s<<"->";
		for(i=adj[s].begin(); i!=adj[s].end();i++){
			if(	visited[*i]!=1)
				nodes.push_back(*i);
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
	
	g.BFS(0);
	return 0;

}