#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string s, line;
	while (getline(cin, line))
	{
		if (!s.empty()) s += ' ';
		s += line;	
	}
	
	for (int i = 0; i < s.length(); i++)
	{
		bool isUpper = isupper(s[i]);
		bool isLower = islower(s[i]);
		if (isUpper || isLower)
		{
			bool isAdd = (s[i] + 13) <= (isUpper ? 'Z' : 'z');
			if (isAdd)
			{
				cout << (char)(s[i] + 13);
			}
			else
			{
				cout << (char)(s[i] - 13);
			}
		}
		else
		{
			cout << s[i];
		}
	}
	return 0;
}