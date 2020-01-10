#include "SrchALGraph.h"

void main()
{
	SrchALGraph g;
	g.load( "graph.txt" );
	printf("�׷���(graph.txt)\n");
	g.display();

	printf("DFS ==> ");
	g.resetVisited();
	printf("vertex 3���� ������ ���\n");
	g.DFS( 3 );
	printf("\n\n");
	g.resetVisited();
	printf("vertex 6���� ������ ���\n");
	g.DFS( 6 );
	printf("\n\n");

	printf("BFS ==> ");
	g.resetVisited();
	printf("vertex 3���� ������ ���\n");
	g.BFS( 3 );
	printf("\n\n");
	g.resetVisited();
	printf("vertex 6���� ������ ���\n");
	g.BFS( 6 );
	printf("\n\n");

	system("pause");
}
