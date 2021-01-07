#include <bits/stdc++.h>
using namespace std;
// 자연수 = 0+0+0+0 혹은 이하의 제곱수의 합
int dp[50005];

int main(){
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n; cin >> n;

	dp[0] = 0;
	dp[1] = 1;

	for(int i=1; i<=n; i++)
	{
		dp[i] = min(dp[i-1]+1, );
	}

	cout << dp[n] << "\n";
	return 0;
}