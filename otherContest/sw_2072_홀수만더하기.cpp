#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t; int sum=0, num;
	for (int i=1; i<=t; i++){
		for (int j=0; j<10; j++){
			cin >> num;
			if (num%2==1) sum+=num;
		}
		cout << "#" << i << " " << sum << endl;
		sum=0;
	}
	return 0;
 } 