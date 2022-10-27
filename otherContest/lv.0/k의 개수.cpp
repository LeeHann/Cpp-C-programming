#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    for (int id = i; id <= j; id++)
    {
        int tmp = id;
        while (tmp > 0)
        {
            if (tmp % 10 == k)
                answer++;
            tmp /= 10;
        }
    }
    return answer;
}