#include <stdio.h>

int n[11], pri[1001];

void prm(int n)
{
	int j=2, i;
	for(i=2; i<=n; i++) 
	{
		while(j<=i)
		{
			if(i%j==0)
			{
				break;		
			}
			j++;
		}
		if(i==j)
		{
			pri[i]=j;
		}
		j=2;
	}
}
int main()
{
	int t, i, a, j;
	scanf("%d", &t);
	for (i=0; i<t; i++)
	{
		a=1;
		scanf("%d", &n[i]);
		prm(n[i]);
		for(j=0; j<1000; j++)
		{
			if(pri[j]!=0)
			{
				printf("%d ", pri[j]);
				pri[j]=0;
				a++;
				if(a>10)
				{
					printf("\n");
					a=1;
				}
			}
		}
		printf("\n\n");
	}
	return 0;	
}
