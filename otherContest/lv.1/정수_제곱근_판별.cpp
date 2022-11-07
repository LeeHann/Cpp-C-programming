#include <string>
#include <vector>

using namespace std;

long long solution(long long n) {
    bool findIt = false;
    long long i;
    for (i=1; i*i <= n; i++)
    {
        if (n == i*i)
        {
            findIt = true;
        }
    }
    return findIt ? i*i : -1;
}