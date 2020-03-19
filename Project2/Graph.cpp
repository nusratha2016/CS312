#include <set>
#include <map>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include "Graph.h"
#include <cassert>

using namespace std;

void Graph::add_vertex() {
// vertices.insert(v)
  set<int> s;
  edges.push_back(s);
}

void Graph::add_edge(int source, int target) {
    assert (contains(source) && contains(target));
    edges[source].insert(target);
    edges[target].insert(source);
    nedges++;
}

set<int> Graph::neighbors(int v) const {
    assert (contains(v));
    return edges[v];
}

bool Graph::contains(int v) const {
  return v < V();
}

ostream& operator<< (ostream &out, const Graph &g) {
  return out;
}
