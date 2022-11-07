#include <stdio.h>

int arr[10000];

void b_zero()
{
	int i;
	for (i=1; i<=9999; i++)
	{
		arr[i] = 0;
	}
}

int main()
{
	int n, cnt;
	while (1)
	{
		cnt = 0;
		scanf("%d", &n);
		if (n == 0)
			break;
		while (arr[n] != 1)
		{
			arr[n] = 1;
			n *= n;
			n %= 1000000;
			n /= 100;
			cnt++;
		}
		printf("%d\n", cnt);
		b_zero();
	}
	return 0;
}