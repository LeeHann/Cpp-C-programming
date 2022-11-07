#include <bits/stdc++.h>
using namespace std;
int coin[11];
int main(){
	int n, k, cnt=0; cin >> n >> k;
	for (int i=0; i<n; i++){
		cin >> coin[i];
	}
	for (int i=n-1; i>=0; i--){
		if (coin[i]<=k){
			while(k>=0){
				k-=coin[i];
				cnt++;
			}
			k+=coin[i];
			cnt--;
		}
	}
	cout << cnt << endl;
	return 0;
}
