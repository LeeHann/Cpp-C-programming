#include <iostream>
#include <map>
using namespace std;

int main()
{
	cin.tie(NULL); cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, m;
	map<string, string> mp;
	string addr, pw;

	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> addr >> pw;
		mp.insert({addr, pw});
	}
	for (int i = 0; i < m; i++)
	{
		cin >> addr;
		cout << mp[addr] << "\n";
	}	
	return 0;
}