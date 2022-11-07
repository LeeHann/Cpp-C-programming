#include <iostream>
#include <algorithm>
using namespace std;

// k개 만큼 가지고 있는 걸 n개로 나누는데
// 평등하게 나뉠 수 있는 최대값

int main()
{
	int k, n, result;
	cin >> k >> n;
	
	long long start = 1, end, mid;
	long long lans[k] = {0, };
	for (int i = 0; i < k; i++)
	{// 각 랜선의 길이
		cin >> lans[i];
	}

	sort(lans, lans + k);
	end = lans[k - 1];
	while (start <= end)
	{
		result = 0;
		mid = (start + end) / 2;
		for (int i = 0; i < k; i++)
			result += lans[i] / mid;
		if (result < n) end = mid - 1;
		else start = mid + 1;
	}
	cout << end << "\n";
	return 0;
}