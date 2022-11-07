#include <iostream>
using namespace std;

int num[100005] = {0, };
int accum(int i, int j)
{
	return num[j] - num[i-1];
}

int main()
{
	cin.tie(NULL); cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, m, i, j, tmp;

	cin >> n >> m;
	for (int k = 1; k <= n; k++)
	{
		cin >> tmp;
		num[k] = num[k - 1] + tmp;
	}
	for (int k = 0; k < m; k++)
	{
		cin >> i >> j;
		cout << accum(i, j) << "\n";
	}
	return 0;
}