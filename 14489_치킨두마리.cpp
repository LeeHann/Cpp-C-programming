#include <bits/stdc++.h>
using namespace std;
int main(){
	int a, b, c; cin >> a >> b >> c;
	if (a+b < c*2) cout << a+b;
	else cout << a+b-(c*2);
	return 0;
} 
