#include <iostream>
#include <map>
using namespace std;

string str[100001];

bool isAlpha(char c)
{
	return (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'));
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int n, m;
	map<string, int> mp;
	string tmp;

	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> tmp;
		mp.insert({tmp, i});
		str[i] = tmp;
	}
	for (int i = 0; i < m; i++)
	{
		cin >> tmp;
		if (isAlpha(tmp[0]))	// -> 숫자 출력
			cout << mp[tmp] << "\n";
		else					// -> 이름 출력
			cout << str[stoi(tmp)] << "\n";
	}
	return 0;
}