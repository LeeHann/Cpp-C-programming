#include <bits/stdc++.h>
using namespace std;
double x[4], y[4];
int main()
{
	for (int i=1; i<=3; i++) scanf("%lf%lf", &x[i], &y[i]);
	double incx1_x2 = (x[2]-x[1])/(y[2]-y[1]), incx1_x3 = (x[3]-x[1])/(y[3]-y[1]);
	if (incx1_x2 == incx1_x3) printf("WHERE IS MY CHICKEN?");
	else printf("WINNER WINNER CHICKEN DINNER!");
	return 0;
}
