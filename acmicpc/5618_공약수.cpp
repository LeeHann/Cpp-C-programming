#include <bits/stdc++.h>
using namespace std;
int cd[3];
int main()
{
	int n;
	scanf("%d", &n);
	for (int i=0; i<n; i++)
	{
		scanf("%d", &cd[i]);
	}
	sort(cd, cd+n);
	for (int i=1; i<=cd[0]; i++)
	{
		if (cd[0]%i==0 && cd[1]%i==0 && cd[2]%i==0) printf("%d\n", i);
	}
	return 0;
}
