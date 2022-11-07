#include <bits/stdc++.h>
using namespace std;

long long tri[101];

int main(){
	int t;
	scanf(" %d", &t);
	tri[1] = 1;
	tri[2] = 1;
	tri[3] = 1;
	tri[4] = 2;
	tri[5] = 2;
	for(int i=6; i<=100; i++){
		tri[i] = tri[i-5] + tri[i-1];
	}
	for(int i=1; i<=t; i++){
		int n;
		scanf(" %d", &n);
		printf("%lld\n", tri[n]);
	}
	return 0;
}
