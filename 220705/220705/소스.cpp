#include <iostream>
#include<vector>

using namespace std;

class Edge
{
public:
	int Vertex;
	int Weight;

	Edge(int v, int w) : Vertex(v), Weight(w) {}
};

std::vector<Edge> graph[7];


int main()
{

	Edge edge(1, 1);
	graph[0].push_back(edge);
	
	edge = Edge(0, 1);
	graph[1].push_back(edge);

	edge = Edge(2, 2);
	graph[1].push_back(edge);

	edge = Edge(3, 2);
	graph[1].push_back(edge);

	edge = Edge(1, 2);
	graph[2].push_back(edge);

	edge = Edge(5, 6);
	graph[2].push_back(edge);

	edge = Edge(6, 3);
	graph[2].push_back(edge);

	edge = Edge(1, 2);
	graph[3].push_back(edge);

	edge = Edge(4, 1);
	graph[3].push_back(edge);

	edge = Edge(5, 4);
	graph[3].push_back(edge);

	edge = Edge(3, 1);
	graph[4].push_back(edge);

	edge = Edge(2, 6);	
	graph[5].push_back(edge);

	edge = Edge(3, 4);
	graph[5].push_back(edge);

	edge = Edge(2, 3);
	graph[6].push_back(edge);

	return 0;
}



