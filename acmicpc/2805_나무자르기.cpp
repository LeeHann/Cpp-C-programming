#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(NULL); cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, m;
	long long sum, start, end, mid;
	
	cin >> n >> m;
	int trees[n];
	for (int i = 0; i < n; i++) cin >> trees[i];	

	start = 1;
	sort(trees, trees + n);
	end = trees[n - 1];
	while (start <= end)
	{
		sum = 0;
		mid = (start + end) / 2;
		for (int i = 0; i < n; i++) 
			sum += trees[i] > mid ? (trees[i] - mid) : 0;
		if (sum < m) end = mid - 1;
		else start = mid + 1;
	}
	cout << end;
	return 0;
}