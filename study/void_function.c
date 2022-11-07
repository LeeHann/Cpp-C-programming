#include <stdio.h>

int add1(int x);
double half(int x);
void print_add1_half(int x);

int main()
{
	int num;
	scanf("%d", &num);
	print_add1_half(num);
	
	return 0;
}

int add1(int num)
{
	return num+1;
}
double half(int num)
{
	return num/2.0;
}

void print_add1_half(int num)
{
	printf("%d\n", add1(num));
	printf("%.1f", half(num));
}

