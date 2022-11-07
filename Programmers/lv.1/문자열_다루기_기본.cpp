#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = true;
    bool isDigit = true;
    bool isAlpha = true;
    int len = 0;
    while (s[len])
    {
        if (!('0' <= s[len] && s[len] <= '9'))
            isDigit = false;
        if (!('A' <= s[len] && s[len] <= 'Z') || !('a' <= s[len] && s[len] <= 'z'))
            isAlpha = false;
        len++;
    }
	cout << isDigit << endl;
    if (len != 4 && len != 6) answer = false;
    else if (!isDigit && !isAlpha) answer = false;
    return answer;
}