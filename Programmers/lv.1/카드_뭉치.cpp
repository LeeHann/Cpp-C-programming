#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    while (goal.size() > 0)
	{
		string tmp = goal.front();
		bool tmp1 = tmp == cards1.front();
		bool tmp2 = tmp == cards2.front();
		if (!tmp1 && !tmp2) return "No";
		goal.erase(goal.begin());
		if (tmp1)
		{
			cards1.erase(cards1.begin());
		}
		if (tmp2)
		{
			cards2.erase(cards2.begin());
		}
	}
	return "Yes";
}

int main()
{
	vector<string> cards1 = {"i", "drink", "water"};
	vector<string> cards2 = {"want", "to"};
	vector<string> goal = {"i", "want", "to", "drink", "water"};

	cout << solution(cards1, cards2, goal) << "\n";
	return 0;
}