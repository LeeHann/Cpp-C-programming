#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int N = 0;
bool com(int a, int b)
{
	if (abs(N - a) == abs(N - b))
	{
		return a > b;
	}
	return (abs(N - a) < abs(N - b));
}
vector<int> solution(vector<int> numlist, int n) {
    N = n;
	sort(numlist.begin(), numlist.end(), com);
	return numlist;
}

int main(int argc, char const *argv[])
{
	vector<int> numlist = {10000,20,36,47,40,6,10,7000};
	vector<int> answer = solution(numlist, 30);
	for (auto a : answer)
		cout << a << " ";
	return 0;
}
