#include <string>
#include <vector>
#include <iostream>
#include <sstream>

using namespace std;

vector<string> split(string s)
{
	vector<string> ret;
	stringstream ss(s);
	string tmp;

	while (getline(ss, tmp, ' '))
		ret.push_back(tmp);
	return ret;
}

string solution(string polynomial) {
    string answer = "";
	vector<string> sp = split(polynomial);
	int x = 0, cons = 0;

	for (auto p : sp)
	{	
		if (p == "+") continue;

		if (p[p.length()-1] == 'x')
		{
			if (p.length() == 1) x += 1;
			else x += stoi(p.substr(0, p.length() - 1));
		}
		else
			cons += stoi(p);
	}
	answer += x > 0 ? string((x == 1 ? "" : to_string(x))+"x") : "";
	answer += x > 0 && cons > 0 ? " + " : "";
	answer += cons > 0 ? to_string(cons) : "";
    return answer;
}

int main(int argc, char const *argv[])
{
	cout << solution("x + 7 + 15");
	return 0;
}
