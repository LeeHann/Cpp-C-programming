#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
	sort(s.begin(), s.end());
	char ch = s[0];
	int tmp = 0;

	for (int i = 0; i<s.length(); i++)
	{
		if (ch == s[i])
		{
			tmp++;
		}
		else {
			if (tmp == 1)
				answer += ch;
			tmp = 1;
			ch = s[i];
		}
	}
	if (tmp <= 1)
		answer += ch;
    return answer;
}

int main()
{
	cout << solution("hello");
	return 0;
}