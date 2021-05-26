#include <stdio.h>

float f1(float w, float h)
{
	float ans;
	ans=w*h;
	return ans;
}

float f2(float w, float h)
{
	float ans;
	ans=w*2+h*2;
	return ans;
}


int main()
{
	float w, h;
	scanf("%f %f", &w, &h);
	printf("Circumference:%.3f\nArea:%.3f", f2(w,h), f1(w, h));
	return 0;
}
