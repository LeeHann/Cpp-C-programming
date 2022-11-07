#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string A, string B) {
    int answer = 0;
	int len = A.length();
	while (len--)
	{
		if (A == B)
		{
			return A.length() - len - 1;
		}
		A.insert(0, &A[A.length()-1]);
		A = A.substr(0, A.length()-1);
	}
    return -1;
}

int main(int argc, char const *argv[])
{
	cout << solution("apple", "elppa");
	return 0;
}
