#include <bits/stdc++.h>

using namespace std;
int num[10001];
int main()
{
	int n, sum=0; cin>>n;
	for (int i=0; i<n; i++)
	{
		cin>>num[i];
		if (num[i]<0) num[i]=-num[i];
		sum+=num[i];
	}
	for (int i=0; i<n; i++)
	{
		cin>>num[i];
		if (num[i]<0) num[i]=-num[i];
		sum+=num[i];
	}
	cout<<sum;
	return 0;
}
