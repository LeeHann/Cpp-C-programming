#include <string>
#include <vector>
#include <iostream>

using namespace std;

string earlier(string a, string b)
{
	for (int i=0; i<min(a.length(), b.length()); i++)
	{
		if (a[i] > b[i]) {
			return b;
		} else if (a[i] < b[i]) {
			return a;
		}
	}
	return a.length() > b.length() ? b : a;
}

string later(string a, string b)
{
	for (int i=0; i<min(a.length(), b.length()); i++)
	{
		if (a[i] > b[i]) {
			return a;
		} else if (a[i] < b[i]) {
			return b;
		}
	}
	return a.length() > b.length() ? a : b;
}

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
	for (int i=0; i<strings.size(); i++)
	{
		for (int j=i+1; j<strings.size(); j++)
		{
			if (strings[i][n] > strings[j][n])
			{
				string tmp = strings[i];
				strings[i] = strings[j];
				strings[j] = tmp;
			} 
			else if (strings[i][n] == strings[j][n])
			{
				string _earlier = earlier(strings[i], strings[j]);
				string _later = later(strings[i], strings[j]);
				strings[i] = _earlier;
				strings[j] = _later;
			}
		}
	}
    return strings;
}

int main(int argc, char const *argv[])
{
	vector<string> strings = {"abce", "abcd", "cdx"};
	vector<string> answer = solution(strings, 2);
	for (auto a : answer)
	{
		cout << a << " ";
	} 
	return 0;
}
