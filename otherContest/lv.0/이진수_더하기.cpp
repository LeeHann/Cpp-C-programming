#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string bin1, string bin2) {
    string answer = "";
	long long bin = stoll(bin1) + stoll(bin2);
	int tmp = 0;
	while (bin > 0)
	{
		int b = bin % 10;
		answer.insert(0, to_string(b%2));
		bin = bin / 10 + b / 2;
	}
	if (answer.length() == 0) return "0";
    return answer;
}

int main(int argc, char const *argv[])
{
	cout << solution("0", "0");
	return 0;
}
