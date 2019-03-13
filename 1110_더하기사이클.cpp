#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, cnt=0, sum, tmp;
	scanf("%d", &n);
	
	sum = tmp = n;
	
	sum = tmp/10+tmp%10;
	cnt++;
	tmp = tmp%10*10 + sum%10;
	while (tmp!=n)
	{
		sum = tmp/10+tmp%10;
		cnt++;
		tmp = tmp%10*10 + sum%10;
	}
	
	printf("%d", cnt);
	return 0;
}
