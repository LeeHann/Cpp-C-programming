#include <stdio.h>
#include <stdlib.h>

typedef struct node *graphNode;
typedef struct node{
	int vertex;
	graphNode link;
}node;
typedef struct graph{
	int count;
	graphNode link;
}graph;

void edge(graph g[], int u, int v){
	node *n;
	n = (node*)malloc(sizeof(node));
	n->vertex = v;
	n->link = g[u].link;
	g[u].link = n;
	g[v].count++;
}

void topSort(graph g[], int n){
	int i, j, k, top = -1;
	graphNode ptr;
	
	for(i=0; i<n; i++){
		if(!g[i].count){
			g[i].count = top; top = i;
		}
	}
	for(i=0; i<n; i++){
		if(top == -1) exit(EXIT_FAILURE);
		else{
			j = top; top = g[top].count;
			printf("c%d\n", j);
			for(ptr=g[j].link; ptr; ptr=ptr->link){
				k = ptr->vertex; g[k].count--;
				if(!g[k].count){
					g[k].count = top;
					top = k;
				}
			}
		}
	}
}

int main(){
	graph g[15];
	int i;
	
	for(i=0; i<15; i++){
		g[i].link = NULL;
		g[i].count = 0;
	}
	
	edge(g, 0, 4);/*0�� ������ ���� ����*/ 

	edge(g, 1, 3);/*1�� ������ ���� ����*/ 
	
	edge(g, 2, 3);/*2�� ������ ���� ����*/ 
	
	edge(g, 3, 7);/*3�� ������ ���� ����*/ 
	edge(g, 3, 8);

	edge(g, 4, 5);/*4�� ������ ���� ����*/
	
	edge(g, 5, 6);/*5�� ������ ���� ����*/
	edge(g, 5, 7);

	edge(g, 6, 7);/*6�� ������ ���� ����*/ 
	
	edge(g, 7, 9);/*7�� ������ ���� ����*/
	edge(g, 7, 10);
	edge(g, 7, 12);
	edge(g, 7, 13);
	
	edge(g, 8, 9);/*8�� ������ ���� ����*/
	
	edge(g, 10, 11);/*10�� ������ ���� ����*/
	
	edge(g, 13, 14);/*13�� ������ ���� ����*/
	
	printf("���� ���ĵ� ���� : \n");
	topSort(g, 15);
	
	return 0;
}
