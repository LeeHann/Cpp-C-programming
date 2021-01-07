#include <bits/stdc++.h>
using namespace std;
int tmp[41]={1,1,};
int f(int n){
	if (n==0){ return tmp[n];}
	else if (n==1){ return tmp[n];}
	else tmp[n]=f(n-1)+f(n-2);
}
int main()
{
	int t, n; cin >> t;
	for (int i=0; i<t; i++) {
		scanf("%d", &n);
		f(n);
		printf("%d %d\n", tmp[n], tmp[n-1]);
	}
	return 0;
}
