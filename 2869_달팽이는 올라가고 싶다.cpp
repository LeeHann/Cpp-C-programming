#include <bits/stdc++.h>

using namespace std;

int main()
{
	double a, b, v;
	int cnt=1;
	scanf("%lf %lf %lf", &a, &b, &v);
	while(v>0)
	{
		v-=a;
		if(v<=0) break;
		v+=b;
		cnt++;
	}
	printf("%d", cnt);
	return 0;
}
