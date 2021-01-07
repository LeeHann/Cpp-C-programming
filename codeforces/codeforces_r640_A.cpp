#include <bits/stdc++.h>
using namespace std;
int num[6];

int main(){
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t; cin >> t;
	while(t--){
		int n, i; cin >> n;
		int cnt = 0;
		for(i=0; n>0; i++){
			if(n%10 != 0){
					num[i] = (n % 10)*pow(10, i);
					cnt++;
				}
			n /= 10;
		}
		cout << cnt << "\n";
		for(i; i>=0; i--){
			if(num[i] != 0)
			cout << num[i] << " ";
		}
		cout << "\n";
		memset(num, 0, sizeof(num));
	}
	return 0;
}
