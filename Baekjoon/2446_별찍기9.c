#include <stdio.h>

int main()
{
	int n, i, k, j;
	scanf("%d", &n);
	for (i=n; i>1; i--)
	{
		for (k=0; k<n-i; k++)
		{
			printf(" ");
		}
		for (j=i*2-1; j>0; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i=0; i<n; i++)
	{
		for (j=0; j<n-i-1; j++ )
		{
			printf(" ");
		}
		for (k=0; k<i*2+1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
