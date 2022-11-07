#include <string>
#include <vector>
#include <iostream>
#include <sstream>

using namespace std;

vector<string> split(string s, char delimiter)
{
	vector<string> ret;
	stringstream ss(s);
	string tmp;

	while (getline(ss, tmp, delimiter))
		ret.push_back(tmp);
	return ret;
}

int solution(string s) {
    int answer = 0;
	vector<int> tmp;
    vector<string> sp = split(s, ' ');

	for (auto p : sp)
	{
		if (p == "Z")
		{
			answer -= tmp.back();
			tmp.pop_back();
			continue;
		}
		answer += stoi(p);
		tmp.push_back(stoi(p));
	}
    return answer;
}

int main()
{
	cout << solution("1 2 3 Z Z");
	return 0;
}