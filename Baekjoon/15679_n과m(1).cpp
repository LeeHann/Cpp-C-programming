#include <bits/stdc++.h>
using namespace std;
int n, m;
int num[10], ck[10];

void f(int pos){
	if(pos == m){
		for(int i=0; i<m; i++){
			cout << num[i] << " ";
		}
		cout << "\n";
		return;
	}
	for(int i=1; i<=n; i++){
		if(!ck[i]){
			ck[i] = 1;
			num[pos] = i;
			f(pos+1);
			ck[i] = 0;
		}
	}
}
int main(){
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> n >> m;
	f(0);
	return 0;
}
