#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;
	int sum = 0;
	sort(d.begin(), d.end());
	for (; answer<d.size(); answer++)
	{
		sum += d[answer];
		if (sum > budget)
			break;
	}
    return answer;
}

int main(int argc, char const *argv[])
{
	vector<int> d = {2, 2, 3, 3};
	cout << solution(d, 10);
	return 0;
}
