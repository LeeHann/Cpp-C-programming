#include <bits/stdc++.h>
using namespace std;
char str[101];
int alp[26];
int main()
{
	std::fill_n(alp, 26, -1);
	scanf("%s", str);
	for (int i=0; i<strlen(str); i++)
	{
		if (alp[str[i]-97] == -1) alp[str[i]-97]=i;
	}
	for (int i=0; i<26; i++)
	{
		printf("%d ", alp[i]);
	}
	return 0;
 } 
