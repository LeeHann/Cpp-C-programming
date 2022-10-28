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

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
	int x, y, z;
	int opt = 1;
	for (int i = 0; i < quiz.size(); i++)
	{
		vector<string> tmp = split(quiz[i], ' ');
		x = stoi(tmp[0]);
		opt = (tmp[1] == "+") ? 1 : -1;
		y = stoi(tmp[2]);
		z = stoi(tmp[4]);
		if (x + y * opt == z)
			answer.push_back("O");
		else
			answer.push_back("X");
	}
    return answer;
}

int main(int argc, char const *argv[])
{
	vector<string> quiz = {"3 - 4 = -3", "5 + 6 = 11"};
	vector<string> answer = solution(quiz);
	for (auto i : answer)
		cout << i << " ";
	return 0;
}
