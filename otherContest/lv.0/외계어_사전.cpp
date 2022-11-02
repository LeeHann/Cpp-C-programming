#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    int answer = 2;
	int pos, tmp;
	for (auto word : dic)
	{
		tmp = 0;
		for (auto s : spell)
		{
			if ((pos = word.find(s)) != string::npos)
			{
				word.replace(pos, 1, "");
				tmp++;
			}
		}
		if (word.length() == 0 && tmp == spell.size())
			answer = 1;
	}
    return answer;
}

int main()
{
	vector<string> spell = {"s", "o", "m", "d"};
	vector<string> dic = {"moos", "dzx", "smm", "sunmmo", "som"};
	cout << solution(spell, dic);
	return 0;
}