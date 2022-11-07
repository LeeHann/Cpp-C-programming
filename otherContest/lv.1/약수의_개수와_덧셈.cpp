#include <string>
#include <vector>
using namespace std;

// 임의의 수의 범위가 주어지고 각 수의 약수의 개수를 센다.
// 약수의 개수가 짝수인 수는 answer에 더하고 약수의 개수가 홀수인 수는 answer에서 뺀다.

int CntDivisor(int n)
{
    int cnt = 0;
    for (int i=1; i*i<=n; i++)
    {
        if (n % i == 0)
        {
            if (n/i == i)
                cnt += 1;
            else
                cnt += 2;
        }
    }
    return (cnt);
}


int solution(int left, int right) {
    int answer = 0;
    for (int i=left; i<=right; i++)
    {
        int cnt = CntDivisor(i);
        if (cnt % 2)    // odd
        {
            answer -= i;
        } 
        else            // even
        {
            answer += i;
        }
    }
    return answer;
}