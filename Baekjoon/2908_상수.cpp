#include <bits/stdc++.h>
using namespace std;
int main(){
	int a, b, _a = 0, _b = 0, tmp;
	cin >> a >> b;
	
	tmp = a%10;
	_a += tmp * 100;
	a /= 10;
	tmp = a%10;
	_a += tmp * 10;
	a /= 10;
	_a += a;
	
	tmp = b%10;
	_b += tmp * 100;
	b /= 10;
	tmp = b%10;
	_b += tmp * 10;
	b /= 10;
	_b += b;
	
	if(_a > _b) cout << _a << "\n";
	else cout << _b << "\n";
	return 0;
}
