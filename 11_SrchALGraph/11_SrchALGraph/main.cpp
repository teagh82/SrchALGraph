#include "SrchALGraph.h"

void main()
{
	SrchALGraph g;
	g.load( "graph.txt" );
	printf("그래프(graph.txt)\n");
	g.display();

	printf("DFS ==> ");
	g.resetVisited();
	printf("vertex 3에서 시작한 경우\n");
	g.DFS( 3 );
	printf("\n\n");
	g.resetVisited();
	printf("vertex 6에서 시작한 경우\n");
	g.DFS( 6 );
	printf("\n\n");

	printf("BFS ==> ");
	g.resetVisited();
	printf("vertex 3에서 시작한 경우\n");
	g.BFS( 3 );
	printf("\n\n");
	g.resetVisited();
	printf("vertex 6에서 시작한 경우\n");
	g.BFS( 6 );
	printf("\n\n");

	system("pause");
}
