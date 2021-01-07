#include <bits/stdc++.h>
using namespace std;
long long fibo[1000001];
int main(){
	int n, cnt = 0;
	scanf(" %d", &n);
	fibo[1] = 1;
	fibo[2] = 2;
	for(int i=3; i<=n; i++){
		fibo[i] = fibo[i-2] + fibo[i-1];
		fibo[i] %= 15746;
	}
	printf("%lld", fibo[n]);
	return 0;
}
