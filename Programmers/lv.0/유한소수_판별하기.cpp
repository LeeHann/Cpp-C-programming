#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
	while (b > 0 && (b % 2 == 0 || b % 5 == 0))
	{
		if (b % 2 == 0)
			b /= 2;
		if (b % 5 == 0)
			b /= 5;
	}
	if (b > 1)
	{
		for (int i = 2; i <= a; i++)
		{
			while (a % i == 0 && b % i == 0)
			{
				a /= i;
				b /= i;
				if (b == 0 || b == 1) return 1;
			}
		}
	}
	else if (b == 0 || b == 1) return 1;
    return 2;
}

int main(int argc, char const *argv[])
{
	cout << solution(7, 20);
	return 0;
}
