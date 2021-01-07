#include <bits/stdc++.h>
using namespace std;
long long dp[91];
int main(){
	int n;
	scanf(" %d", &n);
	dp[1] = 1;
	dp[2] = 1;
	for(int i=3; i<=90; i++){
		dp[i] = dp[i-2] + dp[i-1];
	}
	printf("%lld\n", dp[n]);
	return 0;
}
