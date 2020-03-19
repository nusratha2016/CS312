#include "Graph.h"
#include <iostream>
using namespace std;
int main()
{
	Graph Nusrath_Graph;
	Nusrath_Graph.add_vertex();
	Nusrath_Graph.add_vertex();
	Nusrath_Graph.add_vertex();
	Nusrath_Graph.add_vertex();
	Nusrath_Graph.add_vertex();

	Nusrath_Graph.add_edge(0,2);
	Nusrath_Graph.add_edge(0,4);
	Nusrath_Graph.add_edge(1,4);
	Nusrath_Graph.add_edge(2,3);
	Nusrath_Graph.add_edge(2,4);

	cout << Nusrath_Graph;
}
