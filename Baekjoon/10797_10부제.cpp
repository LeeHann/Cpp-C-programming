#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, num[5], cnt=0;
	scanf("%d", &n);
	for (int i=0; i<5; i++)
	{
		scanf("%d", &num[i]);
		if (num[i]==n) cnt++;
	}
	cout<<cnt;
	return 0;
}
