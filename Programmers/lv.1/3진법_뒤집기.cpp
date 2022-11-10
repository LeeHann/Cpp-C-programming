#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(int n) {
    int answer = 0;
	string three;
	while (n > 0)
	{
		three.insert(0, 1, (n % 3) + '0');
		n /= 3;
	}
	reverse(three.begin(), three.end());
	for (auto a : three)
	{
		answer *= 3;
		answer += (a - '0');
	}
    return answer;
}

int main(int argc, char const *argv[])
{
	cout << solution(125);
	return 0;
}
