#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) {
    return s.length() % 2 == 0 ? string(s, s.length()/2-1, 2) : string(s, s.length()/2, 1);
}

int main(int argc, char const *argv[])
{
	cout << solution("abcdef");
	return 0;
}
