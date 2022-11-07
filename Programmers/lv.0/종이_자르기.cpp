#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int M, int N) {
    return (M-1) + M*(N-1);
}

int main()
{
	cout << solution(2, 2);
	return 0;
}