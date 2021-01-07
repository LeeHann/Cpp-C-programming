#include <bits/stdc++.h>
using namespace std;
int num[500001], most[8001]={0,};
int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, max=-4001, min=4001, max1=0, cnt=0, ans;
	double sum=0.0;
	cin>>n;
	for (int i=0; i<n; i++)
	{
		cin>>num[i];
		most[num[i]+4000]++;
		sum+=num[i];
		if (num[i]>=max) max=num[i];
		if (num[i]<=min) min=num[i];
	}
	for (int i=0; i<8001; i++)
	{
		if (most[i]>max1) max1=most[i];
	}
	for (int i=0; i<8001; i++)
	{
		if (most[i]==max1)
		{
			cnt++;
			if (cnt<=2) ans= i - 4000;
		}
	}
	sort(num, num+n);
	sum/=n;
	if (sum>=0) sum+=0.5;
	else sum-=0.5;
	int rng = max-min;
	cout<<(int)sum<<"\n"<<num[n/2]<<"\n"<<ans<<"\n"<<rng;
	return 0;
}
