#include <stdio.h>
// 1부터 N까지 자연수 중에서 중복 없이 M개를 고른 수열
// 고른 수열은 오름차순이어야 한다.

int n, m;
int arr[9], ck[9];

void dfs(int cnt, int start)
{
	int i;
	if (cnt == m)
	{
		for(i=0; i<m; i++)
			printf("%d ", arr[i]);
		printf("\n");
		return;
	}
	for(i=start; i<=n; i++)
	{
		if (!ck[i])
		{
			ck[i] = 1;
			arr[cnt] = i;
			dfs(cnt + 1, i + 1);
			ck[i] = 0;
		}
	}
}

int main()
{
	scanf("%d %d", &n, &m);
	dfs(0, 1);
	return (0);
}