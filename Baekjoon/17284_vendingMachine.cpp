#include <bits/stdc++.h>
using namespace std;
int main(){
	char click; int charge=5000;
	while (1){
		cin.get(click);
		if (click=='\n') break;
		if (click=='1') charge-=500;
		else if (click=='2') charge -= 800;
		else if (click=='3') charge -= 1000;
	}
	cout << charge;
	return 0;
}
