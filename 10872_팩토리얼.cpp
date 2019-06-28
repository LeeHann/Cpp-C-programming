#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, tmp=1;
	scanf("%d", &n);
	for (int i=1; i<=n; i++)
	{
		tmp*=i;
	 } 
	 printf("%d", tmp);
	return 0;
}
