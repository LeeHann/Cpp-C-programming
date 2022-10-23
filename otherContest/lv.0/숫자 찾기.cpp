#include <string>
#include <vector>
using namespace std;

int solution(int num, int k) {
    string tmp = to_string(num);
    for (int i=0; i<tmp.length(); i++)
    {
        if (tmp[i] == '0' + k)
            return i+1;
    }
    return -1;
}