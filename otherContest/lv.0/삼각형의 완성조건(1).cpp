#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) {
    int _max = -1, index = -1;
    for (int i=0; i<3; i++)
    {
        if (_max < sides[i])
        {
            _max = sides[i];
            index = i;
        }
    }
    if (index == 0)
        return sides[1] + sides[2] > sides[0] ? 1 : 2;
    if (index == 1)
        return sides[0] + sides[2] > sides[1] ? 1 : 2;
    if (index == 2)
        return sides[0] + sides[1] > sides[2] ? 1 : 2;
}