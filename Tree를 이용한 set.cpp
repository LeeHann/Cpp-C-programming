#include <bits/stdc++.h>
#define MAX_SIZE 1000
using namespace std;
int parent[MAX_SIZE];
int rank[MAX_SIZE];

//1)
void Make_Set2(int x){
	parent[x] = x;
	rank[x] = 0;
}

int Find_Set(int x){
	if(x==parent[x]){
		return x;
	}
	else{
		return Find_Set(parent[x]);
	}
}

void Union2(int x, int y){
	int _x = Find_Set(x), _y = Find_Set(y);
	if(rank[_x] > rank[_y]){
		parent[_y] = _x;
	}
	else{
		parent[_x] = _y;
		if(rank[_x] == rank[_y]){
			rank[_y]++;
		}
	}
}

int main(){
	//2)
	Make_Set2('a');
	Make_Set2('b');
	Make_Set2('c');
	Make_Set2('d');
	Make_Set2('e');
	Make_Set2('f');
	Make_Set2('h');
	Make_Set2('k');
	Make_Set2('m');
	
	//그림 1 
	Union2('a', 'b');
	Union2('h', 'c');
	Union2('b', 'c');
	
	//그림 2
	Union2('d', 'e');
	Union2('m', 'f');
	Union2('k', 'f');
	Union2('f', 'e');
	
	//3)
	Union2('c', 'e');
	
	for(int i=0; i<MAX_SIZE; i++){
		if(parent[i] && rank[i]==3){
			printf("%c의 부모 노드 : %c \n", i, parent[i]);
			printf("%c의 rank 3\n", i);
		}
		else if(parent[i] && rank[i]==2){
			printf("%c의 부모 노드 : %c \n", i, parent[i]);
			printf("%c의 rank 2\n", i);
		}
		else if(parent[i] && rank[i]==1){
			printf("%c의 부모 노드 : %c \n", i, parent[i]);
			printf("%c의 rank 1\n", i);
		}
		else if(parent[i] && rank[i]==0){
			printf("%c의 부모 노드 : %c \n", i, parent[i]);
			printf("%c의 rank 0\n", i);
		}
	}
	return 0;
}
