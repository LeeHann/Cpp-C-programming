#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<vector<int>> score) {
    vector<int> answer(score.size());
	vector<double> avg, index;
	double _min = 101;
	int rank = -1;
	for (auto s : score)
	{
		avg.emplace_back((double)(s[0]+s[1])/2);
		index.emplace_back((double)(s[0]+s[1])/2);
	}
	sort(avg.begin(), avg.end(), greater<>());
	for (int i=0; i < avg.size(); i++)
	{
		if (_min > avg[i])
		{
			rank = i + 1;
			_min = avg[i];
		}
		for (int j=0; j<index.size(); j++)
		{
			if (avg[i] == index[j])
				answer[j] = rank;
		}
	}
    return answer;
}

int main(int argc, char const *argv[])
{
	vector<vector<int>> score = {{1, 2}, {1, 1}, {1, 1}};
	vector<int> answer = solution(score);
	for (auto a : answer)
		cout << a << " ";
	return 0;
}