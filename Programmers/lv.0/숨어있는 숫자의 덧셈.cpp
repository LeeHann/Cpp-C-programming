#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    int i=-1;
    while (my_string[++i])
    {
        if ('1' <= my_string[i] && my_string[i] <= '9')
        {
            answer += my_string[i] - '0';
        }
    }
    return answer;
}