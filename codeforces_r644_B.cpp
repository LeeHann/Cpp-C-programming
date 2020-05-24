#include <bits/stdc++.h>
using namespace std;
int s[51];
int main(){
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);
	
	
	int t, n; cin >> t;
	while(t--){
		cin >> n; // num of athletes
		for(int i=0; i<n; i++){
			cin >> s[i];
		}
		sort(s, s+n);
		int m = 1001;
		for(int i=1; i<n; i++){
			m = min(m, s[i]-s[i-1]);
		}
		cout << m << "\n";
		memset(s, 0, sizeof(s));
	}
	return 0;
}
