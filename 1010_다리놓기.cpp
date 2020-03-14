#include <bits/stdc++.h>
using namespace std;
int dp[30][30];

int combination(int n, int r){
	if(n == r || r == 0) return 1;
	if(dp[n][r]) return dp[n][r];
	return dp[n][r] = combination(n-1, r-1) + combination(n-1, r);
}

int main(){
	int t;
	scanf(" %d", &t);
	
	for(int i=0; i<t; i++){
		int n, m;
		scanf(" %d %d", &n, &m);
		printf("%d\n", combination(m, n));
	}
	return 0;
} 

