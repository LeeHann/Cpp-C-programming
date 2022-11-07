#include <stdio.h>

int add1(int x);
double half(int x);

int main()
{
	int num;
	scanf("%d", &num);
	
	printf("%d\n", add1(num));
	printf("%.1f", half(num));
	return 0;
}

int add1(int x)
{
	return x+1;
}

double half(int x)
{
	return x/2.0;
}
