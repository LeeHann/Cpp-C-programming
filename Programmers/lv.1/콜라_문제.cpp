#include <string>
#include <vector>
using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    int newCoke = n;
    while (newCoke >= a)
    {
        int tmp = (newCoke / a) * b;
        answer += tmp;
        newCoke = newCoke % a + tmp;
    }
    return answer;
}