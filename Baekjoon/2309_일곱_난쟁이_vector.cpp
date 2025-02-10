#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vector<int> vec;
	int count = 9;
	int input;
	int exclude1, exclude2;
	int sum = 0;
	for (int i = 0; i < count; i++)
	{
		cin >> input;
		vec.push_back(input);
		sum += input;
	}

	sort(vec.begin(), vec.end());	

	for (int i = 0; i < count - 1; i++)
	{
		for (int j = i + 1; j < count; j++)
		{
			if (sum - vec[i] - vec[j] != 100) continue;
			int exclude1 = vec[i];
			int exclude2 = vec[j];
			break;	
		}
	}

	for (int i = 0; i < count; i++)
	{
		if (vec[i] == exclude1 || vec[i] == exclude2) continue;
		cout << vec[i] << "\n";
	}

	return 0;
}