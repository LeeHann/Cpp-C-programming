#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int _max = -1, _maxVal = -1;
    vector<int> index(1001);
    for (int i=0; i<array.size(); i++)
    {
        index[array[i]]++;
        if (_max == index[array[i]])
            _maxVal = -1;
        else if (_max < index[array[i]])
        {
            _max = index[array[i]];
            _maxVal = array[i];
        }
    }
    return _maxVal;
}