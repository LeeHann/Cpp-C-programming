#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int b[20];

int RabinKarp(char B[], char P[], int d, int q){
	int i, p = 0, n = strlen(B), m = strlen(P);
	int dm, h;
	dm = pow(d, m-1); h = dm%q;
	b[0] = 0;

	for(i=0; i<m; i++) // P�� ���ĺ��� ���� 0, 1, 2, 3, 4�� ���� 
		P[i] = P[i] - 97;
	for(i=0; i<n; i++) // B�� ���ĺ��� ���� 0, 1, 2, 3, 4�� ����
		B[i] = B[i] - 97;
	
	for(i=0; i<m; i++){	
		p = (d*p + P[i])%q;
		b[0] = (d*b[0] + B[i])%q;
	}

	for(i=0; i<n-m+1; i++){
		if(i>0) {
			b[i] = (d*(b[i-1]-h*B[i-1])+B[i+m-1])%q;
			while(b[i]>0) b[i] -= q;
			while(b[i]<0) b[i] += q;
		}
		if(p == b[i])
			return i; // �迭�� 0���� ���� ���� 
	}
}

int main(){
	char B[20] = "acebbceeaaeeaabd";
	char P[10] = "eeaab";
	
	int d = 5, q = 113;
	
	printf("�迭 B�� �迭 P�� ���ڿ� ��Ī�� �������� %d �̴�.", RabinKarp(B, P, d, q));
	return 0;
} 
