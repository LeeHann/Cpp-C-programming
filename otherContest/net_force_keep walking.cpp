#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x=1, y=1, ans=1;
	while(x<=525)
	{
		ans=x*y+ans+3;
		x++; y++;
	}
	printf("%d", ans);
	return 0;
}
