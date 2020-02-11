#include <bits/stdc++.h>
using namespace std;
int main(){
	string a, b;
	int diff = 50;
	cin >> a >> b;
	for(int i=0; i<=b.size()-a.size(); i++){
		int sum = 0;
		for(int j=0; j<a.size(); j++){
			if(a[j]!=b[i+j]) sum++;
		}
		diff = min(diff, sum);
	}
	cout << diff << "\n";
	return 0;
}
