#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a, b, v, ans;
	scanf("%d%d%d", &a, &b, &v);
	if ((v-a)%(a-b)==0) ans=(v-a)/(a-b)+1;
	else ans=(v-a)/(a-b)+2;
	printf("%d", ans);
	return 0;
}
