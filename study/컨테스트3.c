#include <stdio.h>

int a[101];
int b[101];

int main()
{
	char s;
	int t, i;
	scanf("%s\n%d", &s, &t);
	
	for (i=0; i<t; i++)
	{
		scanf("%d %d", &a[i], &b[i]);
	}
	return 0;
}
