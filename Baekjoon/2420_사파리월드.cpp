#include <iostream>
using namespace std;

long long solution(long long a, long long b)
{
	long long answer;
	answer = a - b;
	return answer > 0 ? answer : answer * -1;
}

int main()
{
	long long a, b;
	cin >> a >> b;
	cout << solution(a, b);
	return 0;
}