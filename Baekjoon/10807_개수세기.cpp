#include <iostream>
using namespace std;

int main()
{
	int n, tmp, v, num[201] = {0, };

	cin >> n;
	for (int i=0; i<n; i++)
	{
		cin >> tmp;
		num[tmp + 100]++;
	}
	cin >> v;
	cout << num[v + 100];
	return 0;
}