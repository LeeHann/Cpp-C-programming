#include <bits/stdc++.h>
using namespace std;
int a[101];
int main()
{
	int n, k, cnt=0; cin>>n>>k;
	for(int i=0; i<k; i++)
	{
		cin>>a[i];
		if (a[i]%2!=0) cnt+=(a[i]/2+1);
		else cnt+=(a[i]/2);
	}
	if(cnt>=n) cout<<"YES";
	else cout<<"NO";
	return 0;
} 
