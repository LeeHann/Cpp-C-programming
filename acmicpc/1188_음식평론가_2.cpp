#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, m, cnt=0;
	scanf("%d%d", &n,&m);
	for (int i=1; i<=m; i++)
	{
		if ((i*n)%m != 0) cnt++;
	}
	printf("%d", cnt);
	return 0;
}
