#include <iostream>
using namespace std;

float solution(string score)
{
	float answer = 0.0;
	if (score[0] >= 'A' && score[0] <= 'D')
	{
		answer = 9 - (score[0] - 60);
		if (score[1] == '+')
			answer += 0.3;
		else if (score[1] == '-')
			answer -= 0.3;
	}
	return answer;
}

int main()
{
	string score;
	cin >> score;
	cout.precision(1);
	cout << fixed << solution(score);
	return 0;
}