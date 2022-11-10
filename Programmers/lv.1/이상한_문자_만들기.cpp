#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) {
	int tmp = 0;
	for (int i=0; i<s.length(); i++)
	{
		if (s[i] == ' ')
		{
			tmp = 0;
			continue;
		}
		if (tmp % 2 != 0)
			s[i] = tolower(s[i]);
		else
			s[i] = toupper(s[i]);
		tmp++;
	}
	return s;
}

int main(int argc, char const *argv[])
{
	cout << solution("try hello world");
	return 0;
}
