#include <stdio.h>

int read_int();
void print_next(int n);
void print_half(int n);

int main()
{
	int num;
	
	num = read_int();
	print_next(num);
	print_half(num);
	
	return 0;
}

int read_int()
{
	int num;
	scanf("%d", &num);
	return num;
}

void print_next(int num)
{
	printf("%d\n", num+1);
}
void print_half(int num)
{
	printf("%.1f", num/2.0);
}
