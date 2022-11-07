#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a, b, c, d, min, all1, all2;
	scanf("%d %d", &a, &b);
	scanf("%d %d", &c, &d);
	all1=a+d;
	all2=b+c;
	if(all1>=all2) min=all2;
	else min=all1;
	printf("%d", min);
	return 0;
}
