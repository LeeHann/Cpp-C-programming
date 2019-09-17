#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, max=-1000001, min=1000001, num; cin >> n;
	for (int i=0; i<n; i++){
		cin >> num;
		if (num>=max) max=num;
		if(num<=min) min=num;
	}
	cout << min << " " << max << endl;
	return 0;
}
