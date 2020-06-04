#include <bits/stdc++.h>
using namespace std;
int dp[1002][4], cost[1002][4];

int main(){
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n; cin >> n;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=3; j++){
			cin >> cost[i][j];
		}
		dp[i][1] = min(dp[i-1][2]+cost[i][1], dp[i-1][3]+cost[i][1]);
		dp[i][2] = min(dp[i-1][1]+cost[i][2], dp[i-1][3]+cost[i][2]);
		dp[i][3] = min(dp[i-1][1]+cost[i][3], dp[i-1][2]+cost[i][3]);
	}
	cout << min(min(dp[n][1], dp[n][2]), dp[n][3]);
	return 0;
}
