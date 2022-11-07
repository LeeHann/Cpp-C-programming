#include <bits/stdc++.h>
using namespace std;
char cloud[100];
int main()
{
	int h, w, cnt;
	scanf("%d %d", &h, &w);
	for (int i=0; i<h; i++)
	{
		scanf("%s", cloud);
		for (int j=0; j<w; j++)
		{
			if (cloud[j] == 'c')
			{
				printf("0 ");
				cnt=0;
				cnt++;
			}
			else if (cnt == 0) printf("-1 ");
			else if (cnt !=0 && cloud[j] !='c')
			{
				printf("%d ", cnt);
				cnt++;
			}
		 } 
		 printf("\n");
		 cnt=0;
	}
	return 0;
}
