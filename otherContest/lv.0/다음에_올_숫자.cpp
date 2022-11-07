#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> common) {
    int answer = 0;
	vector<int> dif;
	vector<int> div;
	for (int i=1; i<common.size(); i++)
	{
		dif.emplace_back(common[i] - common[i-1]);
		if (common[i-1] != 0) div.emplace_back(common[i] / common[i-1]);
	}
	if (dif[0] == dif[dif.size()-1])
		return common[common.size()-1] + dif[0];
	else return common[common.size()-1] * div[0];
}

int main(int argc, char const *argv[])
{
	vector<int> common = {2, 4, 8};
	cout << solution(common);
	return 0;
}
