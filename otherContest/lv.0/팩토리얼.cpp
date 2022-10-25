#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int tmp = 1;
    while (tmp <= n)
    {
        tmp *= (++answer);
    }
    return answer - 1;
}