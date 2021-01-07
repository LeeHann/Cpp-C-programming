#include <bits/stdc++.h>

using namespace std;

int coin[2][10001];

int main()
{
	int n;
	scanf("%d", &n);
	for(int i=0; i<n, i++)
	{
		scanf("%d ", &coin[0][i]);
	}
	for(int i=0; i<n, i++)
	{
		scanf("%d ", &coin[1][i]);
	}
	return 0;
} 
