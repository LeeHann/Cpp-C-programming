#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
	for (int i=0; i<arr1.size(); i++)
	{
		string tmp;
		for (int j=0; j<arr1.size(); j++) // 2진화
		{
			tmp.insert(0, 1, (arr1[i] % 2) + '0');
			arr1[i] /= 2;
		}
		answer.emplace_back(tmp);
	}
	for (int i=0; i < arr2.size(); i++)
	{
		string tmp;
		for (int j=0; j<arr2.size(); j++)
		{
			tmp.insert(0, 1, (arr2[i] % 2) + '0');
			arr2[i] /= 2;
		}
		for (int j=0; j<answer.size(); j++)
		{
			answer[i][j] = answer[i][j] | tmp[j];
			answer[i][j] = answer[i][j] == '1' ? '#' : ' ';
		}
	}
    return answer;
}

int main(int argc, char const *argv[])
{
	vector<int> arr1 = {9, 20, 28, 18, 11};
	vector<int> arr2 = {30, 1, 21, 17, 28};
	vector<string> answer = solution(5, arr1, arr2);
	for (auto a : answer)
	{
		cout << a << "\n";
	}
	return 0;
}
