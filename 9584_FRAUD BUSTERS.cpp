#include <bits/stdc++.h>
using namespace std;
char sen[10], car[1001][10], ans[1001][10];
int main()
{
	int n, cnt=0, ck, k=0;
	scanf("%s ", sen);
	scanf("%d", &n);
	for (int i=0; i<n; i++)
	{
		scanf(" %s", car[i]);
		ck=0;
		for (int j=0; j<9; j++)
		{
			if(sen[j] == '*') 
			{
				ck++;
				continue;
			}
			if(car[i][j] != sen[j])
			{
				break;
			}
			ck++;
		}
		if(ck == 9) 
		{
			cnt++;
			strcpy(ans[k], car[i]);
			k++;
		}
	}
	printf("%d\n", cnt);
	for(int i=0; i<=cnt; i++)
	{
		cout << ans[i] << endl;
	}
	return 0;
}
