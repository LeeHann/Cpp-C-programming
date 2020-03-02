#include <bits/stdc++.h>
using namespace std;
int dp[1001];
int main(){
	int n;
	scanf(" %d", &n);
	dp[1] = 1;
	dp[2] = 2;
	for(int i=3; i<=1000; i++){
		for(int j=1; j<=2; j++){
			if(j == 1) dp[i] = (dp[i] + dp[i-j])%10007;
			else if(j == 2) dp[i] = (dp[i] + dp[i-j])%10007;
		}
	}
	printf("%d", dp[n]);
	return 0;
} 
