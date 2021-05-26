#include <stdio.h>

int calc(int c, int num1, int num2)
{
	if (c==1)
	{
		return (num1+num2);
	}
	else if (c==2)
	{
		return (num1-num2);
	}
	else if (c==3)
	{
		return (num1*num2);
	}
}

int main()
{
	int c, dec1, dec2;
	scanf("%d", &c);
	if (c!=1 && c!=2 && c!=3)
	{
		return 0;
	}
	scanf("%d %d", &dec1, &dec2);
	printf("%d\n", calc(c, dec1, dec2));
	return 0;
}
