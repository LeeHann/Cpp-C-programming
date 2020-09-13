#include <bits/stdc++.h>
using namespace std;

int zero, one;

int f(int n){
	if (n==0){
		zero++;
		return 0;
	}
	else if (n==1){
		one++;
		return 1;
	}
	return f(n-2)+f(n-1);
}

int main()
{
	int t, n; scanf("%d", &t);
	for (int i=1; i<=t; i++){
		zero=0; one=0;
		scanf("%d", &n);
		f(n);
		printf("%d %d\n", zero, one);
	}
	return 0;
}
