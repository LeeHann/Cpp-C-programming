#include <stdio.h>

float f(float wid, float hei)
{
	return (wid*hei);
}

float g(float wid, float hei)
{
	return (wid*2+hei*2);
} 
int main()
{
	float wid, hei;
	scanf("%f %f", &wid, &hei);
	printf("Circumference:%.3f\n", g(wid, hei));
	printf("Area:%.3f\n", f(wid, hei));
	return 0;
} 
