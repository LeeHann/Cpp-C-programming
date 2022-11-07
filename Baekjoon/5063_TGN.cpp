#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, r, e, c;
	scanf("%d", &n);
	for (int i=0; i<n; i++)
	{
		scanf("%d%d%d", &r, &e, &c);
		if (r<e-c) cout<<"advertise"<<endl;
		else if (r == e-c) cout<<"does not matter"<<endl;
		else cout<<"do not advertise"<<endl;
	}
	return 0;
}
