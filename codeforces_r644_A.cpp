#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t, a, b; cin >> t;
	while(t--){
		cin >> a >> b;
		if(a>=b){
			if(a>b*2) cout << a*a << "\n";
			else cout << (b*2)*(b*2) << "\n";
		}
		else{
			if(b>a*2) cout << b*b << "\n";
			else cout << (a*2)*(a*2) << "\n";
		}
	}
	return 0;
}
