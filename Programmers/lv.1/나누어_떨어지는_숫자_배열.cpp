#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
	sort(arr.begin(), arr.end());
	for (auto a : arr)
	{
		if (a % divisor == 0)
			answer.emplace_back(a);
	}
    return answer.size() > 0 ? answer : vector<int>(1, -1);
}

int main(int argc, char const *argv[])
{
	vector<int> arr = {3, 2, 6};
	int divisor = 10;
	vector<int> answer = solution(arr, divisor);
	for (auto a : answer)
	{
		cout << a << " ";
	}
	return 0;
}
