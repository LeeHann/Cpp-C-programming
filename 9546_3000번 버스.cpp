#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t, k, n;
	cin >> t;
	for (int i=0; i<t; i++){
		cin >> k;
		n=0;
		for(int j=0; j<k; j++){
			n = n*2+1;
		}
		cout << n << endl;
	}
	return 0;
}
