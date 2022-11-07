#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool solution(int x) {
    int sum = 0;
	string num = to_string(x);
	for (int i=0; i<num.size(); i++)
	{
		sum += num[i] - '0';
	}
    return (x % sum) == 0;
}

int main(int argc, char const *argv[])
{
	cout << solution(10);
	return 0;
}
