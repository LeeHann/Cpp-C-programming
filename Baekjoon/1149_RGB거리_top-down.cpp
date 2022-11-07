#include <bits/stdc++.h>
using namespace std;
int dp[1002][4], cost[1002][4];

int f(int n, int k){
	if(dp[n][k]) return dp[n][k];
	if(n==1) return dp[n][k];
	if(k==1) return dp[n][1] = min(f(n-1, 2), f(n-1, 3))+cost[n][1];
	if(k==2) return dp[n][2] = min(f(n-1, 1), f(n-1, 3))+cost[n][2];
	if(k==3) return dp[n][3] = min(f(n-1, 1), f(n-1, 2))+cost[n][3];
	
	return min(min(dp[n][1], dp[n][2]), dp[n][3]);
}

int main(){
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n; cin >> n;
	for(int i=1; i<=n; i++)
		for(int j=1; j<=3; j++)
			cin >> cost[i][j];
	dp[1][1] = cost[1][1];
	dp[1][2] = cost[1][2];
	dp[1][3] = cost[1][3];			

	cout << min(min(f(n,1), f(n,2)), f(n,3));
	return 0;
}
