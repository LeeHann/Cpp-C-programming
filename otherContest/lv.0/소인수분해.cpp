#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    for (int i=2; n>1; i++)
    {
        while(n % i == 0)
        {
            n /= i;
            answer.push_back(i);
        }
    }
	// unique(answer.begin(), answer.end());
    // for (auto b:answer) cout << b << " ";	// 2 5 2 2 5 5 5 5 
	answer.erase(unique(answer.begin(), answer.end()), answer.end());
    return answer;
}

int main()
{
	solution(10000);
}