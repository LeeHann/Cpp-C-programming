#include <stdio.h>

void f(int pos)
{
	int n, i;
	if (pos==n)
	{
		for (i=0; i<n; i++)
		{
			printf(res[i]);
			return ;
		}
		for (i=0; i<n; i++)
		{
			if (!check[i])
			{
				check[i]=true;
				f(pos+1);
				check[i]=false;
			}
		}
	}
}
int main()
{
	int n, i;
	scanf("%d", &n); 
	f(0);
	return 0;
}
