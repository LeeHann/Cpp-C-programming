#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> lines) {
    int answer = 0;
	vector<int> bd(205);
	for (auto l : lines)
	{
		int _max = max(l[0], l[1]);
		int _min = min(l[0], l[1]);
		for (int i=_min; i < _max; i++)
		{
			bd[i + 100]++;
			if (bd[i + 100] == 2)
				answer++;
		}
	}
	return answer;
}

int main(int argc, char const *argv[])
{
	vector<vector<int>> lines = {{0, 5}, {3, 9}, {1, 10}};
	cout << solution(lines);
	return 0;
}
