#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool isPrime(int num)
{
	for (int i=2; i*i <= num; i++)
	{
		if (num % i == 0)
			return false;
	}
	return true;
}

int solution(int n) {
    int answer = 0;
	for (int i=2; i<=n; i++)
	{
		if (isPrime(i))
			answer++;
	}
    return answer;
}

int main(int argc, char const *argv[])
{
	cout << solution(5);
	return 0;
}
