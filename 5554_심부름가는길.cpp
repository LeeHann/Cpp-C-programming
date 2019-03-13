#include <bits/stdc++.h>
using namespace std;
int run[4];
int main()
{
	int sum=0;
	for (int i=0; i<4; i++)
	{
		scanf("%d", &run[i]);
		sum+=run[i];
	}
	printf("%d\n%d", sum/60, sum%60);
	return 0;
}
