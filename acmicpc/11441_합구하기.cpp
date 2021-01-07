#include <bits/stdc++.h>

using namespace std;

int a[100000];

int main()
{
	int n, m, i, j, sum=0;
	cin>>n;
	for (int k=0; k<n; k++) cin>>a[k];
	cin>>m;
	for (int k=0; k<m; k++)
	{
		cin>>i>>j;
		for (int l=i-1; l<j; l++) sum+=a[l];
		cout<<sum<<endl;
		sum=0;
	}
	return 0;
}
