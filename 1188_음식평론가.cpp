#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m, ans;
	scanf("%d %d", &n, &m);
	if(m%2!=0)
	{
		if(m==n) ans=0;
		else if(m%n!=0) ans=m-1;
		else ans=m-n;
	}
	else
	{
		if(m==n) ans=0;
		else if(m%n==0) ans=m-n;
		else if(n%2==0) ans=n;
		else ans=m-1;
	}
	printf("%d", ans);	
	return 0;
}
