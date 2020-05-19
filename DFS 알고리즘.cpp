#include <bits/stdc++.h>
using namespace std;
int visit[10];
bool print;
 
typedef struct graphNode{
	int vertex;
	struct graphNode *link;	
}graphNode;

typedef struct graph{
	int n;
	graphNode *list[10];
}graph;

void edge(graph *g, int u, int v){
	graphNode *node;
	node = (graphNode*)malloc(sizeof(graphNode));
	node->vertex = v;
	node->link = g->list[u];
	g->list[u] = node;
}

void dfs(graph *g, int v){//(1,2) (2,3) (3,4) (4,5) (2,6) (6,7) (6,8)
	graphNode *w;
	visit[v] = 1; 
	if(!print) printf("%d ", v);
	for(w=g->list[v]; w; w=w->link){
		if(!visit[w->vertex]){
			if(print)
				printf("(%d, %d) ", v, w->vertex);
			dfs(g, w->vertex);
		}
	}
}
int main(){
	/* 1) 첨부화일에 있는 G1에 대하여 인접리스트를 만든다. */
	graph g;
	
	for(int i=1; i<=8; i++){
		g.list[i] = 0;
	}
	edge(&g, 1, 8);
	edge(&g, 1, 6);
	edge(&g, 1, 2);
	
	edge(&g, 2, 6);
	edge(&g, 2, 5);
	edge(&g, 2, 3);
	edge(&g, 2, 1);
	
	edge(&g, 3, 5);
	edge(&g, 3, 4);
	edge(&g, 3, 2);
	
	edge(&g, 4, 5);
	edge(&g, 4, 3);
	
	edge(&g, 5, 4);
	edge(&g, 5, 3);
	edge(&g, 5, 2);
	
	edge(&g, 6, 8);
	edge(&g, 6, 7);
	edge(&g, 6, 2);
	edge(&g, 6, 1);
	
	edge(&g, 7, 6);
	
	edge(&g, 8, 6);
	edge(&g, 8, 1);
	
	/* 2) 1)의 인접리스트를 가지고 DFS 알고리즘을 작성하여 
	 방문한 노드의 순서대로 출력한다. */
	printf("방문한 노드 : ");
	dfs(&g, 1);
	printf("\n");
	
	/* 3) 2)에서 노드를 방문하는 과정에서 사용한 간선을
	 방문 노드 순서대로 출력한다. */
	memset(visit, 0, sizeof(visit));
	printf("사용한 간선 : ");
	print = true;
	dfs(&g, 1);
	
	return 0;
}
