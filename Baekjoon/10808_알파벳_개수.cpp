#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string s;
	cin >> s;

	vector<int> alphabet(26);
	for (int i = 0; i < alphabet.size(); i++)
	{
		for (int j = 0; j < s.length(); j++)
		{
			if (i + 'a' != s[j]) continue;
			alphabet[i]++;
		}
	}

	for (int i = 0; i < alphabet.size(); i++)
	{
		cout << alphabet[i] << " ";
	}
	return 0;
}