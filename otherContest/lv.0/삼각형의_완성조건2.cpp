#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
	int _1, _2, _3;
	_1 = max(sides[0], sides[1]);
	_3 = min(sides[0], sides[1]);
	
	for (int i = _1 -_3 + 1; i <= _1; i++) // find _2
		answer++;
	_2 = _1;
	for (int i = _1; i < _2 + _3 - 1; i++) // find _1 
		answer++;
    return answer;
}

int main(int argc, char const *argv[])
{
	vector<int> sides = {11, 7};
	cout << solution(sides);
	return 0;
}
