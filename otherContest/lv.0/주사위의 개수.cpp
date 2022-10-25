#include <string>
#include <vector>

using namespace std;

int solution(vector<int> box, int n) {
    int answer = 0;
    int tmp = 1;
    for (int i=0; i<3; i++)
    {
        tmp *= box[i]/n;
    }
    return answer + tmp;
}