#include <bits/stdc++.h>
using namespace std;

string x = "abcbdabc", y = "bdcabac";
int c[9][8]; //m=8, n=7

int LCS(int m, int n){
	for(int i=0; i<=m; i++)
		c[i][0] = 0;
	for(int i=0; i<=n; i++)
		c[0][i] = 0;
	
	for(int i=1; i<=m; i++){
		for(int j=1; j<=n; j++){
			if(x[i] == y[j]) c[i][j] = c[i-1][j-1] + 1;
			else c[i][j] = max(c[i-1][j], c[i][j-1]);
		}
	}
	
	return c[m][n];
}

int main(){
	int m = 8, n = 7;
	int ans = LCS(m,n);
	
	for(int i=0; i<=m; i++){
		for(int j=0; j<=n; j++){
			cout << c[i][j] << " ";
		}
		cout << "\n";
	}
	cout << "\n";
	cout << "The answer is " << ans;
	return 0;
}
