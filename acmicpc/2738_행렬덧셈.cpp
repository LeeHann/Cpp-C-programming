#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, m, tmp;
	vector< vector<int> > a, ans;
	vector<int> v;
	
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> tmp;
			v.push_back(tmp);
		}
		a.push_back(v);
		v.clear();
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> tmp;
			a[i][j] += tmp;
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}