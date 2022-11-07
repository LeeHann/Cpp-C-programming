#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(string before, string after) {
    int answer = 1;
    sort(before.begin(), before.end());
	sort(after.begin(), after.end());
	for (int i=0; i<after.length(); i++)
	{
		if (before[i] != after[i])
			answer = 0;
	}
    return answer;
}

int main()
{
	cout << solution("allpe", "apple");
	return 0;
}