#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, input, b, c, tmp;
	vector<int> a;
	long long answer;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		a.push_back(input);
	}
	cin >> b;
	cin >> c;

	answer = 0;
	for (int i = 0; i < n; i++)
	{
		answer++;

		if ((a[i] - b) > 0)
		{
			answer += (a[i] - b) / c;
			if (((a[i] - b) % c) > 0)
			{
				answer++;
			}
		}
	}

	cout << answer << "\n";
	return 0;
}