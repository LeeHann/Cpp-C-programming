#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
	long long tmp = 0;
	for (int i=0; i<n; i++)
	{
		tmp += x;
		answer.push_back(tmp);
	}
    return answer;
}

int main(int argc, char const *argv[])
{
	vector<long long> answer = solution(2, 5);
	for (auto a : answer)
		cout << a << " ";
	return 0;
}
