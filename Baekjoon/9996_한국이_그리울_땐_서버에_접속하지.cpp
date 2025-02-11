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
	
	string pattern;
	cin >> pattern;

	string start, end;
	bool isChecked = false;
	for (int i = 0; i < pattern.length(); i++)
	{
		if (pattern[i] == '*')
		{
			isChecked = true;
			continue;
		}

		if (!isChecked)
		{
			start.push_back(pattern[i]);
		}
		else
		{
			end.push_back(pattern[i]);
		}
	}

	for (int i = 0; i < n; i++)
	{
		string file;
		cin >> file;

		bool isFrontCheck = false, isBackCheck = false;
		int j = 0;
		for (; j < start.length(); j++)
		{
			if (file.length() < j) break;
			if (file[j] != start[j]) break;
			if (j == start.length() - 1)
			{
				isFrontCheck = true;
			}
		}
		for (int k = 0; k < end.length(); k++)
		{
			int index = file.length() - k - 1;
			if (index <= j - 1)
			{
				break;
			}
			if (file[index] != end[end.length() - k - 1]) break;
			if (k == end.length() - 1)
			{
				isBackCheck = true;
			}
		}
		string result = isFrontCheck && isBackCheck ? "DA" : "NE";
		cout << result << "\n";
	}
	return 0;
}