#include <iostream>
using namespace std;

long long solution(long long a, long long b, long long c)
{
	long long answer;
	answer = a + b + c;
	return answer;
}

int main()
{
	long long a, b, c;
	cin >> a >> b >> c;
	cout << solution(a, b, c);
	return 0;
}