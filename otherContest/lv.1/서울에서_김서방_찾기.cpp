#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    int i;
    for (i = 0; i < seoul.size(); i++)
    {
        if (seoul[i] == "Kim")
            break;
    }
    return "김서방은 "+to_string(i)+"에 있다";
}