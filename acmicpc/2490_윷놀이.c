#include <stdio.h>

int a[5];

int main()
{
	int i, j, d=0;
	for (i=0; i<3; i++)
	{
		d=0;
		scanf("%d %d %d %d", &a[1], &a[2], &a[3], &a[4]);
		for(j=1; j<=4; j++)
		{
			d+=a[j];
		}
		if(d==0)
		{
			printf("D\n");
		}
		if(d==1)
		{
			printf("C\n");
		}
		if(d==2)
		{
			printf("B\n");
		}
		if(d==3)
		{
			printf("A\n");
		}
		if(d==4)
		{
			printf("E\n");
		}
	}
	return 0;
}
