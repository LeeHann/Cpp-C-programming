/* 
4 
= 1+3
= 2+2
= 3+1
=> 7개

5산 
= 1+4
= 2+3
= 3+2
=> 13개 

... 10까지 계 
*/
#include <bits/stdc++.h>
using namespace std;
int dp[12];
int main(){
	int t;
	scanf(" %d", &t);
	dp[1] = 1; 
	dp[2] = 2;
	dp[3] = 4;
	for(int i=4; i<=10; i++){
		for(int j=1; j<=3; j++){
			if(j == 1){
				dp[i] = dp[i] + dp[i-j];
			}
			else if(j == 2){
				dp[i] = dp[i] + dp[i-j];
			}
			else if(j == 3){
				dp[i] = dp[i] + dp[i-j];
			}
		}
	}
	for(int i=1; i<=t; i++){
		int n;
		scanf(" %d", &n);
		printf("%d\n", dp[n]);
	}
	return 0;
} 
