#include <stdio.h>

int print()
{
	return printf("hello");
}

int main()
{
	printf("%d", print);
	return 0;
}
