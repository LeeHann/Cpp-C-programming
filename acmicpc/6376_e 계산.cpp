#include <bits/stdc++.h>
using namespace std;
int main()
{
	int xsum=1;
	double psum=1.0;
	printf("n e\n- -----------\n0 1\n1 2\n2 2.5\n");
	for (int i=3; i<=9; i++)
	{
		for (int j=1; j<=i; j++)
		{
			xsum*=j;
			psum+=(double)(1)/xsum;
		}
		printf("%d %.9f\n", i, psum);
		xsum=1;
		psum=1.0;
	}
	return 0;
}
