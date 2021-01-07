#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, finger=0, ck=0; cin >> n;
	while(n>0){
		if (ck==0){
			if(finger==5) {
				ck=1; continue;
			}
			finger++;
		}
		else {
			if(finger==1){
				ck=0; continue;
			}
			finger--;
		}
		n--;
	}
	cout << finger;
	return 0;
}
