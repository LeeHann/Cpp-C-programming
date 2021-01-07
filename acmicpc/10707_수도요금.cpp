#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a, b, c, d, p, x, y;
	cin>>a>>b>>c>>d>>p;
	x=a*p;
	if (p<=c) y=b;
	else y=b+(p-c)*d;
	if (x<=y) cout<<x;
	else cout<<y;
	return 0;
}
