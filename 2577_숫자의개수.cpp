#include <bits/stdc++.h>
int num[10];
using namespace std;
int main(){
	int a, b, c, mlti; cin >> a >> b >> c;
	mlti=a*b*c;
	for (int i=0; mlti; i++) {
		num[mlti%10]++;
		mlti/=10;
	}
	for (int i=0; i<10; i++) cout << num[i] << endl;
	return 0;
}
