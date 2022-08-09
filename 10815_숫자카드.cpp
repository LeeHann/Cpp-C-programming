#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(NULL); cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, m, tmp, start, end;
	bool isIn;
	vector<int> v;
	
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> tmp;
		v.push_back(tmp);
	}
	sort(v.begin(), v.end());
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> tmp;
		start = 0;
		end = n - 1;
		isIn = false;

		while (start <= end)
		{
			int mid = (start + end) / 2;
			if (v[mid] == tmp) 
			{
				isIn = true;
				break;
			}
			else if (v[mid] > tmp) end = mid - 1;
			else start = mid + 1;
		}
		cout << isIn << " ";
	}
	return 0;
}