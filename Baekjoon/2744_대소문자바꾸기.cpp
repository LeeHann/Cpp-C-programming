#include <iostream>
using namespace std;

char upper(char c)
{
	return c - ('a' - 'A');
}

char lower(char c)
{
	return c + ('a' - 'A');
}

int main()
{
	string str;
	cin >> str;
	
	for (int i = 0; i < str.size(); i++)
	{
		str[i] = (str[i] >= 'a' ? upper(str[i]) : lower(str[i]));
	}
	cout << str;
	return 0;
}