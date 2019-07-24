#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long q, a, b, c; cin >> q;
	for (int i=0; i<q; i++){
		long long sum=0;
		cin >> a >> b >> c;
		sum=a+b+c;
		printf("%lld\n", sum/2);
	}
	return 0;
}
