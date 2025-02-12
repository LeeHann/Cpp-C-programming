#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, k, cache = 0, max = -10000001;
	cin >> n >> k;
	
	int days[100001] = {0, };
	for (int i = 0, count = 0; i < n; i++, count++)
	{
		cin >> days[i];
		
		cache += days[i];
		if (count == k - 1)
		{
			max = max <= cache ? cache : max;
			cache -= days[i - count];
			count -= 1;
		}
	}

	cout << max << "\n";
	return 0;
}