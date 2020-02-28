#include <bits/stdc++.h>
using namespace std;

int arr[301], dp[301];

int main(){
	int n;
	scanf(" %d", &n);
	for(int i=1; i<=n; i++){
		scanf(" %d", &arr[i]);
	}
	dp[0] = arr[0];
	dp[1] = dp[0] + arr[1];
	dp[2] = max(dp[0]+arr[2], arr[1]+arr[2]);

	for(int i=3; i<=n; i++){
		dp[i] = max(dp[i-3]+arr[i-1]+arr[i], dp[i-2]+arr[i]);
	}
	cout << dp[n];
	return 0;
}
