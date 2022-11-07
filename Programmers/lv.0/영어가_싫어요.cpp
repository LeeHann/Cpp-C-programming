#include <string>
#include <vector>
#include <iostream>
using namespace std;

long long solution(string numbers) {
    long long answer = 0;
    vector<string> num = {
		"zero", "one", "two", "three", "four", "five",
		"six", "seven", "eight", "nine"
	};
	int tmp;

	for (int i=0; i<num.size(); i++)
	{
		while ((tmp = numbers.find(num[i])) != string::npos)
		{
			numbers.replace(tmp, num[i].size(), to_string(i));
		}
	}
	answer = stoll(numbers);
    return answer;
}

int main()
{
	cout << solution("onetwothreefourfivesixseveneightnineonetwothreefourfivesixseveneightnine");
	return 0;
}