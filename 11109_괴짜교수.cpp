#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t, d, n, s, p;
	scanf("%d", &t);
	for (int i=0; i<t; i++)
	{
		cin>>d>>n>>s>>p;
		if (d+n*p<n*s) cout<<"parallelize"<<endl;
		else if (d+n*p == n*s) cout<<"does not matter"<<endl;
		else cout<<"do not parallelize"<<endl;
	}
	return 0;
}
