#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
	int _min = 101;
	sort(array.begin(), array.end());
    for (auto a : array)
    {
		int tmp = n - a < 0 ? (n - a) * -1 : n - a;
		if (tmp < _min)
		{
			_min = tmp;
			answer = a;
		}
    }
    return answer;
}

int main()
{
	vector<int> v = {-1, -3, -4};
	cout << solution(v, -2);
	return 0;
}