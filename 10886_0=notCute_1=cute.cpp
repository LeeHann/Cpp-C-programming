#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, cute=0, no=0, ans; cin >> n;
	for (int i=0; i<n; i++){
		cin >> ans;
		if (ans==1) cute++;
		else if (ans == 0) no++;
	}
	if (cute>no) cout << "Junhee is cute!";
	else cout << "Junhee is not cute!";
	return 0;
}
