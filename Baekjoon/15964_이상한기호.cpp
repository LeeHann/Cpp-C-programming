#include <iostream>
using namespace std;

long long solution(long long a, long long b)
{
	long long answer;
	answer = (a + b) * (a - b);
	return answer;
}

int main()
{
	long long a, b;
	cin >> a >> b;
	cout << solution(a, b);
	return 0;
}