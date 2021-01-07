#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, no, yes;
	scanf("%d", &n);
	for (int i=0; i<n; i++)
	{
		char s[101] = {0,};
		scanf(" %s", s);
		no=0;
		yes=0;
		for (int j=0; j<strlen(s); j++)
		{
			if(s[j]-s[j+1] == 1 || s[j]-s[j+1] == -1)
			{
				yes++;
				break;
			}
			else if (s[j]-s[j+1] == s[j])
			{
				yes=0;
			}
			else yes=-1;
		}
		sort(s, s+100);
		printf("%s", s);
		for (int j=0; j<strlen(s); j++)
		{
			if(s[j] == s[j+1])
			{
				no++;
				break;
			}
		}
		if(no == 0 && yes>=0) printf("Yes\n");
		else if (no>0 || yes < 0 ) printf("No\n");
	}
	return 0;
}
