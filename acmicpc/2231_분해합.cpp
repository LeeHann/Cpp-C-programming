#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, i; cin >> n;
	for (i=1; i<=n; i++){
		int t=i, sum=i;
		for (; t; t/=10){
			sum+=t%10;
		}
		if (sum==n){
			cout << i << endl;
			break;
		}
	}
	if(i==n+1) cout << "0" << endl;
	return 0;
 } 
