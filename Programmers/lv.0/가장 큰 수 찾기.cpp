#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    int _max = -1, id;
    for (int i=0; i<array.size(); i++)
    {
        if (_max < array[i])
        {
            _max = array[i];
            id = i;
        }
    }
    answer.push_back(_max);
    answer.push_back(id);
    return answer;
}