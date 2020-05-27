#include <stdio.h>
#include <stdlib.h>

#define MAX 100
int dist[8];
bool found[8];
int cost[8][8] = {
	{0, 18, 7, 1, MAX, MAX, MAX, MAX},
	{MAX, 0, MAX, MAX, MAX, MAX, 10, MAX},
	{MAX, 9, 0, 3, MAX, MAX, 21, MAX}, 
	{MAX, MAX, MAX, 0, 2, 25, MAX, MAX},
	{MAX, MAX, 3, MAX, 0, MAX, MAX, 15},
	{MAX, MAX, MAX, MAX, 4, 0, MAX, MAX},
	{MAX, MAX, MAX, MAX, MAX, MAX, 0, 2},
	{MAX, MAX, MAX, MAX, MAX, 4, MAX, 0}};

int extractMin(int n){
	int min = MAX, minpos = -1, i;
	for(i=0; i<n; i++){
		if(!found[i] && dist[i]<min){
			min = dist[i]; minpos=i;
		}
	}
	return minpos;
}

void dijkstra(int v, int n){
	int i, u, w;
	
	for(i=0; i<n; i++){
		found[i] = false;
		dist[i] = cost[v][i];
	}
	found[v] = true;
	for(i=0; i<n-2; i++){
		u = extractMin(n);
		found[u] = true;
		for(w=0; w<n; w++){
			if(!found[w]){
				if(dist[w] > dist[u]+cost[u][w]){
					dist[w] = dist[u]+cost[u][w];
				}
			}
		}
	}
}

int main(){
	int i, j;
	
	printf("0 정점에서 모든 정점까지의 최단 경로: \n\n");
	dijkstra(0, 8);
	for(i=0; i<8; i++)
		printf("0to%d	", i);
	printf("\n\n");
	for(j=0; j<8; j++)
		printf(" %d	", dist[j]);
	return 0;
}
