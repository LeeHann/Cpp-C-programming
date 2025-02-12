#include <iostream>
#include <string>
#include <map>
using namespace std;

string str[100001];

bool isAlpha(char c)
{
	return (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'));
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;
	
	map<string, int> mp;
	string tmp;	

	for (int i = 1; i <= n; i++)
	{
		cin >> tmp;
		mp.insert({tmp, i});
		str[i] = tmp;
	}
	for (int i = 0; i < m; i++)
	{
		cin >> tmp;
		if (isAlpha(tmp[0]))
			cout << mp[tmp] << "\n";
		else
			cout << str[stoi(tmp)] << "\n";
	}
	return 0;
}