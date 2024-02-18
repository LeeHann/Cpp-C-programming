#include <iostream>
using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	int x, n;
	int a, b;
	int count = 0;
	
	cin >> x;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		count += a * b;
	}

	cout << ((x == count) ? "Yes" : "No");
	return 0;
}