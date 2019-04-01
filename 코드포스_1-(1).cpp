#include <bits/stdc++.h>
using namespace std;
char s[101];
int main()
{
	int n;
	scanf("%d", &n);
	for (int i=0; i<n; i++)
	{
		int no=0;
		scanf("%s", s);
		sort(s, s+strlen(s));
		for (int j=0; j<strlen(s); j++)
		{
			if(s[j+1]-s[j] != 1 ) no++;
		}
		if (no==1) printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}
