#include <stdio.h>

int a[101];

int main()
{
	int n, i, j=2, fin=0;
	scanf("%d", &n);
	for (i=1; i<n+1; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i=1; i<n+1; i++)
	{
		while(a[i]!=1 && a[i]!=0)
		{
			if (a[i]%j==0)
			{
				break;
			}
			j+=1;
		}
		if(a[i]==j)
		{
			fin+=1;
		}
		j=2;
	 } 
	printf("%d", fin);
	return 0;
}
