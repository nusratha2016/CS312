#include <iostream>
#include "LabeledGraph.h"

int main() {
  using namespace std;
  LabeledGraph Ahmed_Graph;

Ahmed_Graph.add_vertex("Avatar");
Ahmed_Graph.add_vertex("Zoe Saldana");
Ahmed_Graph.add_vertex("Sam Worthington");
Ahmed_Graph.add_vertex("Michelle Rodriguez");
Ahmed_Graph.add_vertex("Guardian of the Galaxy");
Ahmed_Graph.add_vertex("Chris Pratt");
Ahmed_Graph.add_vertex("Vin Diesel");
Ahmed_Graph.add_vertex("The Fate of the Furious");

Ahmed_Graph.add_edge("Chris Pratt", "Guardian of the Galaxy");
Ahmed_Graph.add_edge("Zoe Saldana", "Guardian of the Galaxy");
Ahmed_Graph.add_edge("Zoe Saldana", "Avatar");
Ahmed_Graph.add_edge("Sam Worthington", "Avatar");
Ahmed_Graph.add_edge("Michelle Rodriguez", "Avatar");
Ahmed_Graph.add_edge("Michelle Rodriguez", "The Fate of the Furious");
Ahmed_Graph.add_edge("Vin Diesel", "Guardian of the Galaxy");
Ahmed_Graph.add_edge("Vin Diesel", "The Fate of the Furious");

cout << Ahmed_Graph;

}
