#include <bits/stdc++.h>
using namespace std;
long long num[51];
int main(){
	int n, ans;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> num[i];
	}
	sort(num, num+n);
	if (n==1) ans = num[0]*num[0];
	else ans = num[0]*num[n-1];
	printf("%d\n", ans);
	return 0;
}
