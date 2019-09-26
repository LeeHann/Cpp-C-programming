#include <bits/stdc++.h>
using namespace std;
int main(){
	string n; cin >> n; 
	for (int i=0; i<n.size(); i++){
		if(n[i]<97 && n[i]!=45) cout << n[i];
	}
	return 0;
}
