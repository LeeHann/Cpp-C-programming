#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string cipher, int code) {
    string answer = "";
    for (int i=0; i<cipher.length(); i++)
	{
		if ((i + 1) % code == 0)
			answer += cipher[i];
	}
    return answer;
}

int main()
{
	cout << solution("dfjardstddetckdaccccdegk", 4);
	return 0;
}