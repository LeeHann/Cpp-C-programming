#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> sizes) {
	int _maxWidth = -1, height = -1;
	for (int i=0; i<sizes.size(); i++)
	{
		int _max = max(sizes[i][0], sizes[i][1]);
		int _min = min(sizes[i][0], sizes[i][1]);
		_maxWidth = max(_max, _maxWidth);
		height = max(_min, height);
	}
    return _maxWidth * height;
}

int main(int argc, char const *argv[])
{
	vector<vector<int>> sizes = {{60, 50}, {30, 70}, {60, 30}, {80, 40}};
	cout << solution(sizes);
	return 0;
}
