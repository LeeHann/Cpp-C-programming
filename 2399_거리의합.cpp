#include <bits/stdc++.h>
using namespace std;
long long num[10001];
int main(){
	int n; long long sum=0; cin >> n;
	for (int i=0; i<n; i++) cin >> num[i];
	sort(num, num+n);
	for (int i=0; i<n; i++){
		if(n==1) break; 
		for (int j=i+1; j<n; j++){
			sum+=(num[j]-num[i]);
		}
	}
	cout << sum*2;
	return 0;
} 
