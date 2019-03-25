#include <bits/stdc++.h>
using namespace std;
int person[101];
int main()
{
	int n, cnt=0;
	scanf("%d", &n);
	for (int i=0; i<n; i++)
	{
		scanf("%d", &person[i]);
	}
	sort(person, person+n);
	for(int i=1; i<n; i++)
	{
		if (person[i]==0) continue;
		if (person[i]==person[i-1])
			cnt++;
	}
	printf("%d", cnt);
	return 0;
}
