#include <stdio.h>
// 아래 조건을 만족하는 
// 길이가 M인 수열을 모두 구하는 프로그램
// 1부터 N까지 자연수 중에서 중복 없이 M개를 고른 수열

int n, m;
int arr[9], ck[9];

void dfs(int cnt)
{
	int i;
	if (cnt == m)
	{
		for(i=0; i<m; i++)
			printf("%d ", arr[i]);
		printf("\n");
		return;
	}
	for (i = 1; i <= n; i++)
	{
		if (ck[i] != 1)
		{
			ck[i] = 1;
			arr[cnt] = i;
			dfs(cnt + 1);
			ck[i] = 0;
		}
	}
}

int main()
{
	scanf("%d %d", &n, &m);
	dfs(0);
	return (0);
}