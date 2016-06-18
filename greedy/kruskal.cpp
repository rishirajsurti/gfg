#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
using namespace std;

class Graph{
private:
	int V;
	list<int> *adj;
	void *wt;
private:
	Graph(int V);
	void addEdge(int u, int v, int w); //u-v edge with weight w
	void printall();
};

Graph::Graph(int V){
	this->V = V;
	adj = new list<int>[V];
	wt = new int[V];
}

void Graph::addEdge(int u, int v, int w){

	adj[u].push_back(v);
	wt[u] = w;
}

void Graph::printall(){
	int i;
	list<int>::iterator it;
	for(i=0; i<V; i++){
		cout<<"Vertex "<<i<<" connected with";
		for(it=adj[i].begin(); it!=adj[i].end(); it++)
			cout<<*it<<" ";

	}
}

int main(){
	Graph g(3);
	g.addEdge(0,1,32);
	g.addEdge(1,2,54);
	return 0;
}