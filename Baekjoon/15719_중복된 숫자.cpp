#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, m, sum=0, sum_1=0, num;
	scanf("%d", &n);
	for (int i=1; i<=n; i++)
	{
		scanf("%d", &num);
		sum+=num;
		sum_1+=i;
	}
	m=n-(sum_1-sum);
	cout<<m;
	return 0;
}
