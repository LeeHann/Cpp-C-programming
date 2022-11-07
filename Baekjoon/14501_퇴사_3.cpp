#include <bits/stdc++.h>
using namespace std;
int t[17], p[17], d[17];
int main(){
	int n;
	scanf(" %d", &n);
	for(int i=1; i<=n; i++)
		scanf(" %d %d", &t[i], &p[i]);
	for(int i=1; i<=n+1; i++){
		for(int j=1; j<i; j++){
			if(j+t[j] == i)
				d[i] = max(d[i], d[i-t[j]]+p[j]);
			else
				d[i] = max(d[i], d[i-1]);
		}
	}
	printf("%d\n", d[n+1]);
	return 0;
}
