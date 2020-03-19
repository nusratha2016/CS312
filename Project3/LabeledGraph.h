#ifndef LABELED_GRAPH_H
#define LABELED_GRAPH_H

#include <set>
#include <map>
#include <vector>
#include <stack>
#include <string>
#include <iostream>
#include <unordered_map>

class LabeledGraph {
public:

    LabeledGraph() {nedges = 0; }

    LabeledGraph(std::string filename);


    void add_vertex(std::string vlabel);


    void add_edge(std::string source, std::string target);


    std::vector<std::string> get_neighbors(std::string query_string);


    std::map<int, int> breadth_first_search(int v);


    std::vector<int> pathTo(std::map<int, int>& parent_map, int target);


    std::vector<int> secondPathTo(int source, int target);


    int distanceTo(std::string source, std::string target);

    int V( ) const { return vertices.size(); }
    unsigned long long int E( ) const { return nedges; }
    bool contains(std::string vlabel) const;
    std::set<int> neighbors(int v) const;
    std::string label(int v) const;
    int index(std::string vlabel);

    std::set<std::string> all_actors;

    friend std::ostream& operator<< (std::ostream &out, const LabeledGraph &g);

private:

    unsigned long long int nedges;
    std::vector<std::set<int> > vertices;
    std::vector<std::string> labels;
    std::map<std::string, int> indexedLabels;
    std::unordered_map<int, int> vertexDistances;


    void addDistance(int source, int distance);


    std::vector<std::string> split_line(std::string line, std::string delimeter);

    void format_actor_string(std::string& name);


    void format_movie_string(std::string& title);
};

#endif
