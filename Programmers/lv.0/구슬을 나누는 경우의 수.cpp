#include <string>
#include <vector>

using namespace std;

int solution(int balls, int share) {
    double answer = 1;
    // ballsCshare
    for (int i = balls; i>balls-share; i--)
        answer *= i;
    for (int i = share; i>0; i--)
        answer /= i;
    return answer;
}