#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer(2);
    int zero=0;
    int matches=0;
    for (int i=0; i<lottos.size(); i++)
    {
        if (lottos[i] == 0)
        {
            zero++;
            continue;
        }
        for (int j=0; j<win_nums.size(); j++)
        {
            if (lottos[i] == win_nums[j])
            {
                matches++;
                continue;
            }
        }
    }
    answer[0] = 7 - ((matches + zero) < 1 ? 1 : matches + zero);
    answer[1] = 7 - (matches < 1 ? 1 : matches);
    return answer;
}