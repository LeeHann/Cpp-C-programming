#include <bits/stdc++.h>
using namespace std;
int main()
{
	int r, b, sum=0;
	scanf("%d%d", &r, &b);
	sum=r+b;
	for (int i=3; i<r; i++)
	{
		if (sum%i==0)
		{
			if (sum/i == sum%i)
			{
				printf("%d %d", sum/i, sum%i);
				return 0;
			}
			else
			{
				if ((sum/i-2)*(i-2)==b){
					printf("%d %d", sum/i, i);
				return 0;}
			}
		}
	}
	return 0;
}   
