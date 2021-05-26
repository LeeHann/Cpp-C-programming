#include <stdio.h>
#include <string.h>

int main()
{
	int t, i, n, j, sum[11], max, k, ans, check, bonus;
	char cmd;
	scanf("%d", &t);
	for(i=0; i<t; i++)
	{
		scanf("%d", &n);
		max=0;
		for(j=1; j<=n; j++)
		{
			bonus = 0;
			scanf(" %d", &sum[j]);
			for(k=0; k<4; k++)
			{
				scanf(" %c", &cmd);
				if(cmd=='O')
					bonus+=5;
			}
			if(max<sum[j]+bonus)
			{
				max=sum[j]+bonus;
				check=sum[j];
			}
				
		}
		
		printf("%d\n\n", check);
	}
	return 0;
}
