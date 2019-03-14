#include <bits/stdc++.h>
using namespace std;
struct strng
{
	char name[51];
};
struct strng str[20001];
bool comp (const strng&a, const strng&b)
{
	if (strlen(a.name) == strlen(b.name))
	{
		for (int j=0; j<strlen(a.name); j++)
		{
			if (a.name[j] == b.name[j]) continue;
			return a.name[j] < b.name[j];
		}
	}
	return strlen(a.name) < strlen(b.name);
}
int main()
{
	int n;
	scanf("%d", &n);
	for (int i=0; i<n; i++)
	{
		scanf(" %s", str[i].name);
	}
	sort(str, str+n, comp);
	for (int i=0; i<n; i++)
	{
		if (strcmp(str[i+1].name,str[i].name)==0) continue;
		printf("%s\n", str[i].name);
	}
	return 0;
}
