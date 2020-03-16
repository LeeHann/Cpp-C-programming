#include <bits/stdc++.h>
using namespace std;

int combination(int n, int r){
	if(n==r || r==0) return 1;
	else return combination(n-1, r-1) + combination(n-1, r);
}

int main(){
	int n, k;
	scanf(" %d %d", &n, &k);
	printf("%d\n", combination(n, k));
	return 0;
}
