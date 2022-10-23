#include <string>
#include <vector>

using namespace std;

vector<int> solution(int denum1, int num1, int denum2, int num2) {
    vector<int> answer;
    // 분모의 곱
    int num = num1 * num2;
    // 분자의 덧셈
    int denum = denum1 * num2 + denum2 * num1;
    // 기약분수화
    for (int i=2; i <num; i++)
    {
        while (num%i == 0 && denum%i == 0)
        {
            num = num/i;
            denum = denum/i;
        }
    }
    answer.push_back(denum);
    answer.push_back(num);
    return answer;
}