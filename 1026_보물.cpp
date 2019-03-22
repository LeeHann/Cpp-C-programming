#include <bits/stdc++.h>
using namespace std;
int a[51], b[51];
bool comp(int a, int b)
{
	return a > b;
}
int main()
{
	int n, s=0;
	scanf("%d", &n);
	for (int i=0; i<n; i++) scanf("%d", &a[i]);
	sort(a, a+n);
	for (int i=0; i<n; i++) scanf("%d", &b[i]);
	for(int i=0; i<n; i++)
	{
		
		s+=(a[i]*b[i]);
	}
	printf("%d", s);
	return 0;
}
