#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int num) {
	long long n = num;
	for (int i=0; i<500; i++)
	{
		if (n == 1) return i;
		n = n % 2 == 0 ? n/2 : n * 3 + 1;
	}
    return n == 1 ? 500 : -1;
}

int main(int argc, char const *argv[])
{
	cout << solution(626331);
	return 0;
}
