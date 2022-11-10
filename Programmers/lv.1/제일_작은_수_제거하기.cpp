#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
	int _min = arr[0];
	int _minId = 0;
	for (int i=1; i<arr.size(); i++)
	{
		if (_min > arr[i])
		{
			_min = arr[i];
			_minId = i;
		}
	}
	arr.erase(arr.begin()+_minId);
    return arr.size() > 0 ? arr : vector<int>{-1};
}

int main(int argc, char const *argv[])
{
	vector<int> arr = {4, 3, 2, 1};
	vector<int> answer =  solution(arr);
	for (auto a : answer)
	{
		cout << a << " ";
	}
	return 0;
}
