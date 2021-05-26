#include <stdio.h>

typedef struct circle
{
	float cum, area;
}crl;

int main()
{
	int r;
	crl c1;
	scanf("%d", &r);
	c1.cum = 2*3.141592*r;
	c1.area = 3.141592*r*r;
	printf("%.3f ", c1.cum);
	printf("%.3f\n", c1.area);
	return 0;
}
