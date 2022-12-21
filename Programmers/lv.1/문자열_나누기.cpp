#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int xNum = 0, otherNum = 0;
    int pos;
    for (int i = 0; i<s.length(); i++)
    {
        if (xNum == 0) pos = i;
        if (s[i] != s[pos]) otherNum++;
        else xNum++;
        if (xNum == otherNum)
        {
            answer++;
            xNum = 0;
            otherNum = 0;
        }
    }
    return xNum > 0 ? answer + 1 : answer;
}