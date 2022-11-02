#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string my_string) {
    int answer = 0;
	int tmp = 0;
	for (auto c : my_string)
	{
		if (isdigit(c))
		{
			tmp *= 10;
			tmp += c - '0';
		}
		if (isalpha(c))
		{
			answer += tmp;
			tmp = 0;
		}
	}
	if (tmp > 0) answer += tmp;
    return answer;
}

int main(int argc, char const *argv[])
{
	cout << solution("12");
	return 0;
}
