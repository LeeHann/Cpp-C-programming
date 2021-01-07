#include <bits/stdc++.h>
using namespace std;
int main(){
	int a[10];
	for(int i=0; i<9; i++) a[i]=i;
	memset(a, 0, sizeof(a));
	for(int i=0; i<9; i++) cout << a[i];
	return 0;
}
