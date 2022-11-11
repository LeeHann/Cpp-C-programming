#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
	for (int i=0; i<commands.size(); i++)
	{
		vector<int> tmp = vector<int>(array);
		tmp.erase(tmp.begin(), tmp.begin() + commands[i][0]-1);
		tmp.erase(tmp.begin() + (commands[i][1] - commands[i][0])+1, tmp.end());
		sort(tmp.begin(), tmp.end());
		answer.emplace_back(tmp[commands[i][2]-1]);
	}
    return answer;
}

int main(int argc, char const *argv[])
{
	vector<int> array = {1, 5, 2, 6, 3, 7, 4};
	vector<vector<int>> commands = {{2, 5, 3}, {4, 4, 1}, {1, 7, 3}};
	vector<int> answer = solution(array, commands);
	for (auto a : answer)
	{
		cout << a << " ";
	}
	return 0;
}
