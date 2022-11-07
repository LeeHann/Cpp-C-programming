#include <stdio.h>

int arr[10001];

int main()
{
	int m, n, i, j, sum, min;
	sum = 0;
	min = 0;
	scanf("%d %d", &m, &n);
	arr[1] = 1;
	for(i = 2; i < n; i++)
	{
		for(j = 2; i*j <= 10000; j++)
		{
			arr[i*j] = 1;
		}
	}
	for(i = m; i <= n; i++)
	{
		if (arr[i] == 0)
		{
			if (min == 0) min = i;
			sum += i;
		}
	}
	if (sum == 0) printf("-1\n");
	else
		printf("%d\n%d\n", sum, min);
	return (0);
}