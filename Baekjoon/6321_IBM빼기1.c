#include <stdio.h>
#include <string.h>

char com[51];

int main()
{
	int i, n, j, len;
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		scanf("%s", com);
		len=strlen(com);
		printf("String #%d\n", i);
		for(j=0; j<len; j++)
		{
			if(com[j]!=90)
			{
				printf("%c", com[j]+1);
			}
			else
			{
				printf("%c", com[j]-25);
			}
		}
		if(i != n) printf("\n\n");
	}
	return 0;
}
