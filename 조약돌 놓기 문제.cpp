#include <bits/stdc++.h>
using namespace std;
int peb[5][10], w[5][10];
int input[4][9] =  {{-6, 7, 12, -5, 5, 3, 11, 3}, 
					{8, 10, 14, 9, 7, 13, 8, 5}, 
					{15, 12, 7, 4, 8, -2, 9, 4}};

int pebble(int n){
	// input �� w�� �����Ѵ�. 
	for(int i=0; i<4; i++){
		for(int j=0; j<n; j++){
			w[i][j] = input[i][j];
			if(i==3){
				w[i][j] = input[0][j] + input[2][j];
			}
		}
	}
	
	// peb �Է� 
	for(int i=0; i<4; i++){ // peb ù��° �� 
		peb[i][0] = w[i][0];
	}

	for(int j=1; j<n; j++){ // peb�� 0 ������ �� 
		for(int i=0; i<4; i++){ // peb�� �� 
			if(i==0){
				peb[i][j] = max(peb[1][j-1], peb[2][j-1]);
				peb[i][j] += w[i][j];
			}
			else if(i==1){
				peb[i][j] = max(peb[0][j-1], peb[2][j-1]);
				peb[i][j] = max(peb[i][j], peb[3][j-1]);
				peb[i][j] += w[i][j];
			}
			else if(i==2){
				peb[i][j] = max(peb[0][j-1], peb[1][j-1]);
				peb[i][j] += w[i][j];	
			}
			else if(i==3){
				peb[i][j] = peb[1][j-1]+w[i][j];
			}
		}
	}
	int max = 0;
	for(int i=0; i<4; i++){
		if(max<=peb[i][n-1]) max = peb[i][n-1];
	}
	return max; // max{peb[n,p]};
}

int main(){
	int n = 8; // �־����� ���� �� 

	cout << pebble(n);
	return 0;
}
