#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int input[101] = {0, };
	int a, b, c;
	cin >> a >> b >> c;

	for (int i = 1; i <= 3; i++)
	{ 
		int start, end;
		cin >> start >> end;
		for (int j = start; j < end; j++)
		{
			input[j]++;
		}
	}

	int sum = 0;
	for (int i = 1; i <= sizeof(input)/sizeof(int); i++)
	{
		if (input[i] == 1)
		{
			sum += input[i] * a;
		}
		else if (input[i] == 2)
		{
			sum += input[i] * b;
		}
		else if (input[i] == 3)
		{
			sum += input[i] * c;
		}
	}

	cout << sum << "\n";
	return 0;
}