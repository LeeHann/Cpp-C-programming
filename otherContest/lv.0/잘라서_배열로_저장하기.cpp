#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
	string tmp = "";
	for (int i=0; i<my_str.length(); i++)
	{
		if (!(i == 0) && i % (n) == 0)
		{
			answer.push_back(tmp);
			tmp = "";
		}
		tmp += my_str[i];
	}
	if (tmp.length() > 0)
		answer.push_back(tmp);
    return answer;
}

int main()
{
	vector<string> ans = solution("abcdef123", 3);
	for (auto i : ans)
		cout << i << " ";
	return 0;
}