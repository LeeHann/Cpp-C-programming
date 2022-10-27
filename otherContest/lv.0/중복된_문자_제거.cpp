#include <string>
#include <vector>
#include <iostream>

using namespace std;
int alpabet[(int)'z'];

string solution(string my_string) {
    string answer = "";
	for (auto s : my_string)
	{
		if (alpabet[s] == 0)
		{
			answer += s;
			alpabet[s] = 1;
		}
	}
    return answer;
}

int main()
{
	cout << solution("We are the world");
	return 0;
}