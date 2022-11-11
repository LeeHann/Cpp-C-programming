#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string s) {
	vector<string> numbers = {
		"zero", "one", "two", "three", "four",
		"five", "six", "seven", "eight", "nine" 
	};
	for (int i=0; i<numbers.size(); i++)
	{
		while (s.find(numbers[i]) != string::npos)
		{
			s.replace(s.find(numbers[i]), numbers[i].length(), to_string(i));
		}
	}
    return stoi(s);
}

int main(int argc, char const *argv[])
{
	cout << solution("one4seveneight");
	return 0;
}
