#include <bits/stdc++.h>
using namespace std;
long long num[200001];
int main(){
	int n, cnt=0, j;
	scanf(" %d", &n);
	for (int i=0; i<n; i++){
		int s, t;
		scanf(" %d %d", &s, &t);
		for(j=s; j<t; j++){
			if(num[j]==1) break;
			num[j] = 1;
		}
		if(j == t) cnt++;
	}
	printf("%d", cnt);
	
	return 0;
}
