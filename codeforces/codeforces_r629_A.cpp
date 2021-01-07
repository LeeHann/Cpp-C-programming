#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int a, b, ans=0;
		cin >> a >> b;
		if(a%b!=0){
			ans = b - (a%b);
			cout << ans << "\n";
		}
		else cout << ans << "\n";
	}
	return 0;
}
