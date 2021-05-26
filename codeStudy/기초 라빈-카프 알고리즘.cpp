#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int a[20];

int basicRabinKarp(char *A, char *P, int d){
	int n = strlen(A), m = strlen(P);
	int p = 0, i, dm;
	dm = pow(d, m-1);
	a[0] = 0;
	
	for(i=0; i<m; i++)
		P[i] = P[i] - 97;
	for(i=0; i<n; i++)
		A[i] = A[i] - 97;

	for(i=0; i<m; i++){	
		p = d*p + (int)P[i];
		a[0] = d*a[0] + (int)A[i];
	}
	
	for(i=0; i<n-m+1; i++){
		if(i>0) a[i] = d*(a[i-1]-dm*(int)A[i-1]) + (int)A[i+m-1];
		if(p == a[i]){
			return i; // 배열이 0에서 부터 시작 
		}
	}
}

int main(){
	char A[20] = "acebbceeaabceedb";
	char P[10] = "eeaab";
	
	printf("배열 A와 배열 P 매칭의 시작점은 %d이다", basicRabinKarp(A, P, 5));
	return 0;
}
