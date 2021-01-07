#include <bits/stdc++.h>
using namespace std;
int charge[11];
int main(){
	int num, i, ck=0;
	for (i=0; i<10; i++){
		cin >> num;
		charge[i] = num%42;
	}
	sort(charge, charge+i);
	for (i=1; i<10; i++)
		if(charge[i] != charge[i-1]) ck++;
	if(ck>0) ck++; 
	cout << ck;
	return 0;
}
