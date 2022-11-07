#include <bits/stdc++.h>
using namespace std;
char alp[101];
int main()
{
	int i=0;
	cin>>alp;
	while (alp[i]>0)
	{
		if (i!=0 && i%10==0) printf("\n");
		printf("%c", alp[i]);
		i++;
	}
	return 0;
}
