#include <stdio.h>

int read_int();
void print_sign(int n);

int main()
{
	int num;
	num = read_int();
	print_sign(num);
	
	return 0;
}

int read_int()
{
	int num;
	scanf("%d", &num);
	return num;
}
void print_sign(int n)
{
	printf("%d ", n);
	if(n>0)
		printf("양수\n");
	else if(n<0)
		printf("음수\n");
	else
		printf("양수도 음수도 아님\n");
	
}
