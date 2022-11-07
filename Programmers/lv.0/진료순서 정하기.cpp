#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2)
{
    return p1.first > p2.first;
}
vector<int> solution(vector<int> emergency) {
    vector<int> answer(emergency.size() + 1);
    vector<pair<int, int>> com;
    pair<int, int> tmp;
    
    for (int i=0; i<emergency.size(); i++)
    {
        tmp.first = emergency[i];
        tmp.second = i+1;
        com.push_back(tmp);
    }
    sort(com.begin(), com.end(), comp);
    for (int i = 1; i <emergency.size() + 1; i++)
    {
        answer[com[i-1].second] = i;
    }
	answer.erase(answer.begin());
    return answer;
}