#include <bits/stdc++.h>
using namespace std;
int a[2001];
int main()
{
	int n, sum=0, ck;
	scanf("%d", &n);
	for (int i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	sort(a, a+n);
	for (int i=1; i<n; i++)
	{
		ck=0;
		if (a[i-1]==a[i]) 
		{
			sum+=a[i-1];
			ck=a[i-1];
			for (int j=0; j<n; j++)
			{
				if(a[j]==ck) a[j]=0;
			}
		}
	}
	if (ck%2==1)
	{
		for (int i=0; i<n; i++)
		{
			if(a[i]%2==0)
			{
				sum+=a[i];
				a[i]=0;
			}
		}
	}
	else
	{
		for (int i=0; i<n; i++)
		{
			if(a[i]%2==1)
			{
				sum+=a[i];
				a[i]=0;
			}
		}
	}
	printf("%d", sum);
	return 0;
}
