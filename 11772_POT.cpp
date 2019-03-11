#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, p, sum=0, pot;
	scanf("%d", &n);
	for (int i=0; i<n; i++)
	{
		scanf("%d", &p);
		pot=p%10;
		p/=10;
		sum+=pow(p, pot);
	}
	cout<<sum;
	return 0;
}
