#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;
	int sum = 0;
	for (int i=total; i>total-num; i--)
		sum += i;
	sum = (sum - total)/num;

	int firstNum = total - sum;
	for (int i=num - 1; i>=0; i--)
		answer.emplace_back(firstNum - i);
    return answer;
}

int main(int argc, char const *argv[])
{
	vector<int> answer = solution(5, 5);
	for (auto a : answer)
	{
		cout << a << " ";
	}
	return 0;
}
