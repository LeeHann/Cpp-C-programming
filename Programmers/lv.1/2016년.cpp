#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(int a, int b) {
	vector<string> day = {"THU","FRI","SAT","SUN","MON","TUE","WED"};
	vector<int> days = {31,29,31,30,31,30,31,31,30,31,30,31};
	int cnt = b;
	for (int i=0; i<12; i++)
	{
		if (a > i + 1)
		{
			cnt += days[i];
		}
	}
    return day[cnt%7];
}

int main(int argc, char const *argv[])
{
	cout << solution(5, 24);
	return 0;
}
