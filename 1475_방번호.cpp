#include <bits/stdc++.h>
using namespace std;
char n[1000001];
bool cmp(const char &a, const char &b)
{
	return a < b;
}
int main()
{
	int six=0, ck=0;
	scanf("%s", &n);
	double cnt=(double)strlen(n);
	sort(n, n+strlen(n), cmp);
	for (int i=0; i<strlen(n); i++)
	{
		if (n[i]!=n[i+1]) 
		{
			if (n[i]=='6' || n[i]=='9') 
			{	
				if(ck>0) cnt-=0.5;
				else ck++;
				continue;
			}
			cnt--;
		}
		else if (n[i]=='6' || n[i]=='9') 
		{
			if(ck>0) cnt-=0.5;
			else ck++;
		}
	}
	if (ck>2) cnt--;
	printf("%d", (int)(cnt));
	return 0;
}
