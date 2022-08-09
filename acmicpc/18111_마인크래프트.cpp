#include <iostream>
using namespace std;

// 갈기 - 2초 / 얹기 - 1초 
	
int main()
{
	cin.tie(NULL); cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, m, b;

	cin >> n >> m >> b;
	int area[n][m];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> area[i][j];
		}
	}
	cout << "time, " << "height";
	return 0;
}