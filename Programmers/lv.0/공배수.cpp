#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int number, int n, int m) {
    int answer = 1;
	answer &= (number % n == 0);
	answer &= (number % m == 0);
    return answer;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, m, number;

	cin >> number;
	cin >> n >> m;

	cout << solution(number, n, m) << "\n";

	return 0;
}