#include <bits/stdc++.h>
using namespace std;
long long num[1000001];
int main(){
	int n; cin >> n;
	for (int i=0; i<n; i++){
		cin >> num[i];
	}
	sort(num, num+n);
	long long ans=num[0];
	int max=0, cnt=1;
	for(int i=1; i<n; i++){
		if (num[i]==num[i-1]){
			cnt++;
			if (max<cnt){
				max=cnt; ans=num[i-1];
			}
		}
		else cnt=1;
	}
	cout << ans;
	return 0;
} 
