#include <bits/stdc++.h>
using namespace std;
int ans[101], b[101];
int main()
{
	int n, sum=0;
	scanf("%d", &n);
	for (int i=1; i<=n; i++) scanf("%d", &b[i]);   
	for (int i=1; i<=n; i++) ans[i] = i*b[i]-(i-1)*b[i-1];
	for (int i=1; i<=n; i++) printf("%d ", ans[i]);
	return 0;
}
