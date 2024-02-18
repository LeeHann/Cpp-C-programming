#include <iostream>
using namespace std;

int function(int n)
{
	return n - 543;
}

int main()
{
	cin.tie(NULL); cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	cout << function(n) << "\n";

	return 0;
}