#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int count, n, typeCount;
	string name, type;
	bool isExistType;
	vector<pair<string, int>> vec;

	cin >> count;
	for (int i = 0; i < count; i++)
	{
		cin >> n;
		vec.clear();
		for (int j = 0; j < n; j++)
		{
			cin >> name >> type;
			isExistType = false;
			for (int k = 0; k < vec.size(); k++)
			{
				if (vec[k].first != type) continue;
				vec[k].second++;
				isExistType = true;
				break;
			}
			if (!isExistType)
			{
				vec.push_back({type, 1});
			}
		}
		
		typeCount = 1;
		for(int k = 0; k < vec.size(); k++) // vector 돌면서 타입 개수를 세서 (N+1) * (M+1) * ... * (K+1) - 1 
		{
			typeCount *= (vec[k].second + 1);
		}
		cout << typeCount - 1 << "\n";
	}

	return 0;
}