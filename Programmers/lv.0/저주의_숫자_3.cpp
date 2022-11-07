#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n) {
	int answer = 0;
	for (int i = 1; i <= n; i++)
	{
		answer++;
		while (answer % 3 == 0 || to_string(answer).find("3") != string::npos)
			answer++;
	}
	return answer;
}

int main()
{
	cout << solution(15);
	return 0;
}