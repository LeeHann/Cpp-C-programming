#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, m, k; cin >> n >> m >> k;
	while (k){
		if (n>=2*m){
			n--; k--;
		}
		else{
			m--; k--;
		}
	}
	if (n>=2*m) cout << m << endl;
	else cout << n/2 << endl;
	return 0;
}
