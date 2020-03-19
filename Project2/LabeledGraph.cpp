#include <set>
#include <map>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include "LabeledGraph.h"

using namespace std;

void LabeledGraph::add_vertex(string vlabel) {
  labels.push_back(vlabel);
  indexedLabels.insert(pair<string, int>(vlabel, V()));
  set<int> s;
  vertices.push_back(s);
}

void LabeledGraph::add_edge(string source, string target) {
    if (!contains(source))
      add_vertex(source);
    if (!contains(target))
      add_vertex(target);
    vertices[indexedLabels[source]].insert(indexedLabels[target]);
    vertices[indexedLabels[target]].insert(indexedLabels[source]);
    nedges++;
}

bool LabeledGraph::contains(string vlabel)const {
  return indexedLabels.find(vlabel) != indexedLabels.end();
}

set<int> LabeledGraph::neighbors(int v) const {
    return vertices[v];
}

string LabeledGraph::label(int v) const {
    return labels[v];
}

int LabeledGraph::index(string vlabel) {
    if(contains(vlabel)) {
    return indexedLabels[vlabel];
}
    return -1;
}


ostream& operator<< (ostream &out, LabeledGraph &g) {
  set<int>::iterator it;
  cout<<"=========================================\n";
  cout<<"Graph Summary: "
          <<g.V() <<" vertices, "
          <<g.E() <<" edges.\n";
  cout<<"=========================================\n";

  for(int i = 0; i < g.V(); i++) {
    string GetCurrent = g.label(i);
    cout << GetCurrent <<":\n";

    int idx = g.index(GetCurrent);
    set<int>GetnextNeighbor;
    if(idx >-1) GetnextNeighbor = g.neighbors(idx);
    for(it = GetnextNeighbor.begin(); it != GetnextNeighbor.end();
    it++) {
     cout<<"\t"<<g.label(*(it))<<endl;
    }

  }
  return out;
}
