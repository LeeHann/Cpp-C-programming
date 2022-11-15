#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
	vector<int> _num(3);
	for (int i = 0; i<answers.size(); i++)
	{
		if ("12345"[i%5] == (answers[i] + '0')) _num[0]++;
		if ("21232425"[i%8] == (answers[i] + '0')) _num[1]++;
		if ("3311224455"[i%10] == (answers[i] + '0')) _num[2]++;
	}
	int _max = *max_element(_num.begin(), _num.end());
	for (int i=0; i<3; i++)
	{
		if (_num[i] == _max) answer.emplace_back(i+1);
	}
    return answer;
}

int main(int argc, char const *argv[])
{
	vector<int> answers = {1,3,2,4,2};
	vector<int> answer = solution(answers);
	for (auto a : answer)
	{
		cout << a << " ";
	}
	return 0;
}
