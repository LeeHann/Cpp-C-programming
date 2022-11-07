#include <iostream>
using namespace std;
int main()
{
	int dollars, ticket=0, cnt=0, ans;
	cin >> dollars;
	cnt+=dollars;
	ticket+=dollars;
	while (ticket >= 7)
	{
		ans = ticket/7;
		cnt += ans;
		ticket %= 7;
		ticket += ans;
	}
	printf("%d %d", cnt, ticket);
	return 0;	
}

