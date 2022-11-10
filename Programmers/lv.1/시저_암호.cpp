#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s, int n) {
    string answer = "";
	string _alpha = "abcdefghijklmnopqrstuvwxyz";
	for (int i=0; i<s.length(); i++)
	{
		if (s[i] == ' ')
			answer += ' ';
		if (isalpha(s[i]))
		{
			if (isupper(s[i])) {
				answer += toupper(_alpha[(s[i]+n - 'A')%_alpha.length()]);
			} else {
				answer += _alpha[(s[i]+n - 'a')%_alpha.length()];
			}
		}
	}
    return answer;
}

int main(int argc, char const *argv[])
{
	cout << solution("AaZz", 25);
	return 0;
}
