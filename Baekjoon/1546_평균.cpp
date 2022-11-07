#include <bits/stdc++.h>

using namespace std;

double test[1000];
float ans[1000];

int main()
{
	int n, max=0;
	float sum=0;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		scanf("%lf", &test[i]);
		if(test[i]>=max)
		{
			max=test[i];
		}
	}
	for(int i=0; i<n; i++)
	{
		ans[i]=test[i]*100/max;
		sum+=ans[i];
	}
	printf("%.2f", sum/n);
	return 0;
}
