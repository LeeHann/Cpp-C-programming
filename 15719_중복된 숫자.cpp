#include <bits/stdc++.h>
using namespace std;
int num[10000000];
int main()
{
	int n, m;
	scanf("%d", &n);
	for (int i=0; i<n; i++)
	{
		cin>>num[i];
		for (int j=0; j<i; j++)
		{
			if (num[i] == num[j]) 
			{
				cout<<num[i];
				m=num[i];
				break;
			}
		}
	}
	return 0;
}
