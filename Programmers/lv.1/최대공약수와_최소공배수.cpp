#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer = {1, 1};
	for (int i=2; i <= min(n, m); i++)
	{
		while (n % i == 0 && m % i == 0)
		{
			answer[0] *= i;
			n /= i; m /= i;
		}
	}
	answer[1] *= (answer[0] * n * m);
    return answer;
}

int main(int argc, char const *argv[])
{
	vector<int> answer = solution(1, 5);
	for (auto a : answer)
	{
		cout << a << " ";
	}	
	return 0;
}
