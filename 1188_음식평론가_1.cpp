#include <bits/stdc++.h>
using namespace std;
int gcd(int p, int q)
{
	int cnt=0;
	if (p==q) return q;
	for (int i=1; i<=p; i++)
	{
		if (p%i == 0 && q%i == 0) cnt++;
	}
	return cnt;
}
int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	printf("%d", m-gcd(n,m));
	return 0;
}
