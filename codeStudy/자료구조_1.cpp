#include <stdio.h>
int main()
{
	int list[5] = {10, 20, 30, 40, 50};
	int *pt;
	pt = &list[0];
	int i;
	for (i=0; i<5; i++)
	{
		printf("%d", *(pt+i));
	}
	return 0;
}
