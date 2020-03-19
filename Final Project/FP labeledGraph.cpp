#include "LabeledGraph.h"
#include "CS312Final.cpp"
#include <iostream>
using namespace std;
int main()
{
    //string s = "Movies_short.txt";
	LabeledGraph jessicalabeledgraph;

	jessicalabeledgraph.add_vertex("fail");
	jessicalabeledgraph.add_vertex("fall");
	jessicalabeledgraph.add_vertex("pall");
    jessicalabeledgraph.add_vertex("pale");
    jessicalabeledgraph.add_vertex("sale");
    jessicalabeledgraph.add_vertex("sage");
    jessicalabeledgraph.add_vertex("page");
    jessicalabeledgraph.add_vertex("pole");
    jessicalabeledgraph.add_vertex("pope");
    jessicalabeledgraph.add_vertex("poll");
    jessicalabeledgraph.add_vertex("pool");
    jessicalabeledgraph.add_vertex("cool");
    jessicalabeledgraph.add_vertex("fool");
    jessicalabeledgraph.add_vertex("foul");
    jessicalabeledgraph.add_vertex("foil");


	jessicalabeledgraph.add_edge("foul","foil");
    jessicalabeledgraph.add_edge("foil","fail");
    jessicalabeledgraph.add_edge("fail","fall");
    jessicalabeledgraph.add_edge("fall","pall");
    jessicalabeledgraph.add_edge("pall","poll");
    jessicalabeledgraph.add_edge("poll","pool");
    jessicalabeledgraph.add_edge("pool","cool");
    jessicalabeledgraph.add_edge("cool","fool");
    jessicalabeledgraph.add_edge("fool","foul");



	cout << jessicalabeledgraph;
}
