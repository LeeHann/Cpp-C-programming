#include <bits/stdc++.h>

using namespace std;

int cnt[26];

int main()
{
	char s[101];
	scanf("%s", s);
	for (int i=0; i<strlen(s); i++) cnt[s[i]-97]++;
	for (int i=0; i<26; i++) cout<<cnt[i]<<" ";
	return 0;
}
