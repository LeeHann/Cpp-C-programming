#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    string can[] = {"aya", "ye", "woo", "ma"};
	string cannot[] = {"ayaaya", "yeye", "woowoo", "mama"};
    for (int i=0; i<babbling.size(); i++)
    {
		for (auto c : cannot)
		{
			while (babbling[i].find(c) != string::npos)
				babbling[i].replace(babbling[i].find(c), c.length(), "1");
		}
		for (auto c : can)
		{
			while (babbling[i].find(c) != string::npos)
				babbling[i].replace(babbling[i].find(c), c.length(), "");
		}
		if (babbling[i].length() == 0)
			answer++;
    }
    return answer;
}