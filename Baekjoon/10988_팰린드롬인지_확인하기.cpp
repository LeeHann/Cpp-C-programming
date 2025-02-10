#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string s;
	cin >> s;

	int isPalindrome = 1;
	for (int i = 0; i < s.length() / 2; i++)
	{
		if (s[i] == s[s.length() - i - 1]) continue;
		isPalindrome = 0;
		break;
	}

	cout << isPalindrome << "\n";
	return 0;
}