#include <bits/stdc++.h>
using namespace std;
int black[101][101]= {0,};
int main()
{
	int n, x, y, cnt=0;
	scanf("%d", &n);
	for (int i=0; i<n; i++)
	{
		scanf("%d%d", &x, &y);
		for (int j=x; j<x+10; j++)
		{
			for (int k=y; k<y+10; k++)
			{
				black[j][k]=1;
			}
		}
	}
	for(int i=1; i<=100; i++)
	{
		for (int j=1; j<=100; j++)
		{
			if (black[i][j]==1) cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}
