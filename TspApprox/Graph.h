#pragma once
#include <vector>
#include <string>

class Graph
{
private:
	struct vertex{
		std::string name;
		double x,y;

	};



	std::vector< std::vector < vertex > > adjMatrix;





public:
	Graph(void);
	~Graph(void);

	 double dist(vertex a, vertex b);



};

