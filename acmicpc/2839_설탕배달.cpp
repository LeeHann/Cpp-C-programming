#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, cnt=0;
	scanf("%d", &n); 
	while(n>0)
	{
		if (n%5==0)
		{
			printf("%d", cnt+n/5);
			return 0;
		}
		n-=3;
		cnt++;
		if (n==0)
		{
			printf("%d", cnt);
			return 0;
		}
	}
	printf("-1");
	return 0;
}
