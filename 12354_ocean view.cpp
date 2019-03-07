#include <bits/stdc++.h>
using namespace std;
int num[51];
int main()
{
	int t, n, j;
	cin>>t; 
	for (int i=0; i<t; i++)
	{
		int cnt=0;
		cin>>n;
		for (j=0; j<n; j++) cin>>num[j];
		while (j>0)
		{
			if (num[--j]<=num[j-1]) cnt++;
		}
		cout<<"Case #"<<i+1<<": "<<cnt<<endl;
	}	
	return 0;
}
