#include <stdio.h>
// 0<a<=b<=1,000,000

int main()
{
	int a, b, n, i, ans, x, y, j;
	float t1, cnt, all;
	t1 = -1;
	scanf("%d %d\n%d", &a, &b, &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d %d", &x, &y);
		cnt = 0;
		all = (b-a+1) * (y-x+1);
		for (j = a; j <= b; j++)
		{
			if (j < y)
				cnt += (j < x) ? (y - x + 1) : (y - j);
		}
		if (t1 < (float)(cnt/all))
		{
			t1 = (float)(cnt/all);
			ans = i;
		}
	}
	printf("%d", ans);
	return 0;
}