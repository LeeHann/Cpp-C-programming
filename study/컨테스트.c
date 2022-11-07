#include <stdio.h>

char n[1001];
char m[1001];

int main()
{
	int N, i, sum=0, j;
	scanf("%d\n", &N);
	for (i=0; i<N; i++)
	{
		scanf("%s\n", &n[i]);
	}
	for (j=0; j<N; j++)
	{
		scanf("%s\n", &m[j]);
	}
	
	j=0;
	for (i=0; i<N; i++)
	{
		if (n[i]!=m[i])
		{
			sum+=1;
			j+=1;
		}
		j+=1;
	}
	printf("%d", sum);
}
