#include <string>
#include <vector>

using namespace std;

int pos[27];
string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    int tmp;
    for (int i=0; i<survey.size(); i++)
    {
        tmp = choices[i] - 4;
        if (tmp < 0)
            pos[survey[i][0] - 'A'] += tmp * -1;
        else pos[survey[i][1] - 'A'] += tmp;
    }
    answer += (pos['R'-'A'] >= pos['T'-'A']) ? 'R' : 'T';
    answer += (pos['C'-'A'] >= pos['F'-'A']) ? 'C' : 'F';
    answer += (pos['J'-'A'] >= pos['M'-'A']) ? 'J' : 'M';
    answer += (pos['A'-'A'] >= pos['N'-'A']) ? 'A' : 'N';
    return answer;
}