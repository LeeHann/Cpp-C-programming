#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

long long solution(long long n) {
	string answer = to_string(n);
	sort(answer.begin(), answer.end(), greater<>());
	return stoll(answer);
}

int main(int argc, char const *argv[])
{
	cout << solution(118372);
	return 0;
}
