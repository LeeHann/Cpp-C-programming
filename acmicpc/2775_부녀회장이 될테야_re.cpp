#include <bits/stdc++.h>
using namespace std;
int res[15][15];

int main(){
	int t;
	scanf(" %d", &t);
	
	for(int i=0; i<=14; i++){//Ãþ 
		int cnt = 0;
		for(int j=1; j<=14; j++){//È£ 
			if(i==0) res[i][j] = j;
			else{
				cnt += res[i-1][j];
				res[i][j] = cnt;
			}
		}
	}
	
	for(int i=0; i<t; i++){
		int k, n;
		scanf(" %d %d", &k, &n);
		printf("%d\n", res[k][n]);
	}
	return 0;
}
