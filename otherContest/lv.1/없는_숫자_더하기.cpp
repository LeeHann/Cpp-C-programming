#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
	for (auto n : numbers) answer += n;
    return 45 - answer;
}

int main(int argc, char const *argv[])
{
	vector<int> numbers = {1,2,3,4,6,7,8,0};
	cout << solution(numbers);
	return 0;
}
