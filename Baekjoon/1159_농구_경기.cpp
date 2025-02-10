#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;

	int firstName[26] = {0, };
	for (int i = 0; i < n; i++)
	{
		string name;
		cin >> name;
		if (name.length() <= 0) continue; 
		firstName[name[0] - 'a']++;
	}

	int isEmpty = 1;
	for (int i = 0; i < sizeof(firstName)/sizeof(int); i++)
	{
		if (firstName[i] < 5) continue;
		cout << (char)('a' + i);
		isEmpty = 0;
	}
	
	if (isEmpty == 1)
	{
		cout << "PREDAJA";
	}
	return 0;
}