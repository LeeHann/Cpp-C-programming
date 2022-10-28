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

int solution(string my_string) {
    int answer = 0;
	int tmp = 1;
	vector<string> str = split(my_string, ' ');
	for (int i=0; i<str.size(); i++)
	{
		if (str[i] == "+") {
			tmp = 1;
		} else if (str[i] == "-") {
			tmp = -1;
		} else {
			answer += stoi(str[i]) * tmp;
		}
	}
    return answer;
}

int main(int argc, char const *argv[])
{
	cout << solution(" 3 + 4");
	return 0;
}
