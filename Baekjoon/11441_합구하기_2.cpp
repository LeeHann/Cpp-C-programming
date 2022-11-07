#include <bits/stdc++.h>
using namespace std;
int num[100000];
int main()
{
	int n, m, i, j;
	scanf("%d", &n);
	for (int k=1; k<=n; k++)
	{
		scanf("%d", &num[k]);
		num[k]+=num[k-1];
	}
	scanf("%d", &m);
	for (int k=1; k<=m; k++)
	{
		scanf("%d%d", &i,&j);
		printf("%d\n", num[j]-num[i-1]);
	}
	return 0;
}
