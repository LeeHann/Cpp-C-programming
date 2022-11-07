#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    vector<int>::iterator ptr;
    int i = 0;

    for (ptr = arr.begin(); ptr != arr.end(); ++ptr)
    {
        if (i == 0 || answer[i-1] != *ptr)
        {
            answer.push_back(*ptr);
            i++;
        }
    }
    return answer;
}