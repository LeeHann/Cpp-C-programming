#include <stdio.h>

int CalVal(int a, int b, int c)
{
	if (c - b <= 0) 
		return (-1);
	return (a / (c - b) + 1);
}

int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d\n", CalVal(a, b, c));
	return (0);
}