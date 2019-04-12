#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
	int tmp;
	if (a>b) tmp = b;
	else tmp = a;
	while (tmp>=1)
	{
		if (a%tmp==0 && b%tmp==0)
			return tmp;
		tmp--;
	}
	return tmp;
}
int lcm(int a, int b, int ans)
{
	return a*b/ans;
} 
int main()
{
	int a,b, ans;
	scanf("%d%d", &a,&b);
	ans=gcd(a,b);
	printf("%d\n%d", ans, lcm(a,b, ans));
	return 0;
}
