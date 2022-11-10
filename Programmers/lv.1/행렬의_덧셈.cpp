#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
	for (int i=0; i<arr1.size(); i++)
	{
		vector<int> tmp;
		for (int j=0; j<arr1[i].size(); j++)
		{
			tmp.emplace_back(arr1[i][j] + arr2[i][j]);
		}
		answer.emplace_back(tmp);
	}
    return answer;
}

int main(int argc, char const *argv[])
{
	vector<vector<int>> arr1 = {{1, 2}, {2, 3}};
	vector<vector<int>> arr2 = {{3, 4}, {5, 6}};
	vector<vector<int>> answer = solution(arr1, arr2);
	for (auto ans : answer)
	{
		for (auto a : ans)
		{
			cout << a << " ";
		}
	}
	return 0;
}
