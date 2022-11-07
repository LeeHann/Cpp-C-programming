#include <stdio.h>

struct rtg
{
	int wid, hei;
};

int main()
{
	int width, height, i, j;
	struct rtg r1;
	scanf("%d %d", &width, &height);
	r1.wid = width;
	r1.hei = height;
	for(i=0; i<width; i++)
	{
		printf("*");
	}
	printf("\n");
	for(i=0; i<height-2; i++)
	{
		printf("*");
		for(j=0; j<width-2; j++)
		{
			printf(" ");
		}
		printf("*\n");
	}
	for(i=0; i<width; i++)
	{
		printf("*");
	}
	printf("\n");
	return 0;
}
