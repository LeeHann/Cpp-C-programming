#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, w, h, len;
	double rou;
	cin>>n>>w>>h;
	for (int i=0; i<n; i++)
	{
		cin>>len;
		rou=w*w+h*h;
		if (len*len<=rou) cout<<"DA\n";
		else cout<<"NE\n";
	}
	return 0;
}
