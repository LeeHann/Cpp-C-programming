#include <stdio.h>

int calc(int i, int j)
{
	int cnt=1, max=0, tt;
	while (i<=j)
	{
		tt=i;
		while (tt>1)
		{
			if(tt%2==0)
			{
				tt/=2;
				cnt++;
			}
			else
			{
				tt=tt*3+1;
				cnt++;
			}
		}
		if(cnt>max)
		{
			max=cnt;	
		}
		i++;
		cnt=1;
	}
	return max;
}
int main()
{
	int i, j;
	scanf("%d %d", &i, &j);
	printf("%d\n", calc(i, j));
	return 0;
}
