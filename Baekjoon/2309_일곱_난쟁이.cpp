#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int count = 9;
	int n[9], exclude1, exclude2;
	int sum = 0;
	for (int i = 0; i < count; i++)
	{
		cin >> n[i];
		sum += n[i];
	}

	for (int i = 0; i < count - 1; i++)
	{
		for (int j = i + 1; j < count; j++)
		{
			if (n[j] < n[i])
			{
				int tmp = n[j]; 
				n[j] = n[i];
				n[i] = tmp;
			}
		}
	}

	for (int i = 0; i < count - 1; i++)
	{
		for (int j = i + 1; j < count; j++)
		{
			if (sum - n[i] - n[j] != 100) continue;
			exclude1 = n[i];
			exclude2 = n[j];
			break;	
		}
	}

	for (int i = 0; i < count; i++)
	{
		if (n[i] == exclude1 || n[i] == exclude2) continue;
		cout << n[i] << "\n";
	}

	return 0;
}