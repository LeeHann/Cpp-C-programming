#include <bits/stdc++.h>
using namespace std;
//top-down
int dp[12];

int f(int n){
	if(dp[n]) return dp[n];
	if(n==1 || n==2) return dp[n] = n;
	else if(n==3) return dp[n] = 4;
	return dp[n] = f(n-1)+f(n-2)+f(n-3); 
}
int main(){
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t; cin >> t;
	while(t--){	
		int n;  cin >> n;
		cout << f(n) << "\n";
	}
	return 0;
}
