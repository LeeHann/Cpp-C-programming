#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m, a[100001], b[100001], j=0;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	scanf("%d", &m);
	for(int i=0; i<m; i++)
	{
		scanf("%d", &b[i]);
	}
	for(int i=0; i<m; i++)
	{
		while (true)
		{
			if(a[j]==b[i])
			{
				printf("1\n");
				break;
			}
			else if(a[j]==0)
			{
				printf("0\n");
				break;
			}
			j++;
		}
		j=0;
	}
	return 0;
}
