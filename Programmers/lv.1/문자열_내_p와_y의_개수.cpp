#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    int i = -1, tmp = 0;
    while (s[++i])
    {
        if (s[i] == 'p' || s[i] == 'P')
            tmp++;
        else if (s[i] == 'y' || s[i] == 'Y')
            tmp--;
    }
    return tmp == 0 ? true : false;
}