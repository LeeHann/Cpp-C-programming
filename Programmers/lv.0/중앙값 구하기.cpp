#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array) {
    // for (int i=0; i<array.size(); i++)
    // {
    //     for (int j=i + 1; j<array.size(); j++)
    //     {
    //         if (array[i] > array[j])
    //         {
    //             int tmp = array[i];
    //             array[i] = array[j];
    //             array[j] = tmp;
    //         }
    //     }
    // }
    sort(array.begin(), array.end());
    return array[array.size()/2];
}