#include <bits/stdc++.h>
using namespace std;
int kind[7] = {500, 100, 50, 10, 5, 1};
int main(){
	int pay, cnt=0; cin >> pay; pay=1000-pay;
	for (int i=0; pay>0; i++){
		while(pay>=kind[i]){
			pay-=kind[i];
			cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}

