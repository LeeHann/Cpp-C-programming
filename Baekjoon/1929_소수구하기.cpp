#include <bits/stdc++.h>
using namespace std;
int main()
{
	bool ck=false;
	int n,m; scanf("%d %d", &n, &m);
	for (int i=n; i<=m; i++){
		for (int j=2; j*j<=i; j++)
			if (i%j==0) {
				ck=true;
				break;
			}
		if(ck==false && i!=1) printf("%d\n", i);
		ck=false;
	}
	return 0;
}
