#include <stdio.h>
#include <string.h>

int stack[10001]; 

int main()
{
	int n, i, x, j, cnt, m, k=0;
	char cmd[6];
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%s", cmd);
		if(strcmp(cmd,"push")==0)
		{
			scanf(" %d", &x);
			stack[k]=x;
			k++;
		}
		if(strcmp(cmd,"pop")==0)
		{
			if(k==0)
			{
				printf("-1\n");
			}
			else
			{
				if(k>0)
					--k; 
				printf("%d\n", stack[k]);
				stack[k]=0;
			}
		}
		if(strcmp(cmd,"size")==0)
		{
			cnt=0;
			for(j=0; j<=k; j++)
			{
				if(stack[j]!=0)
				{
					cnt++;
				}
			}
			printf("%d\n", cnt);
		}
		if(strcmp(cmd,"empty")==0)
		{
			cnt=0;
			for(j=0; j<=k; j++)
			{
				if(stack[j]!=0)
				{
					cnt++;
				}
			}
			if(cnt==0)
			{
				printf("1\n");
			}
			else
			{
				printf("0\n");
			}
		}
		if(strcmp(cmd,"top")==0)
		{
			if(k==0)
			{
				printf("-1\n");
			}
			else
			{
				printf("%d\n", stack[k-1]);
			}
		}
		
	}
	return 0;
}

