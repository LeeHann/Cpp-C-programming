#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

string solution(string s) {
	sort(s.begin(), s.end(), greater<>());
	return s;
}

int main(int argc, char const *argv[])
{
	cout << solution("Zbcdefg");
	return 0;
}
