#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> dots) {
	int width = 0, height = 0;
	for (int i=1; i<4; i++)
	{
		if (dots[i][0] == dots[0][0])
		{
			height = dots[i][1] - dots[0][1];
			height = height < 0 ? height * -1 : height;
		}
		else if (dots[i][1] == dots[0][1])
		{
			width = dots[i][0] - dots[0][0];
			width = width < 0 ? width * -1 : width;
		}
	}
    return height * width;
}

int main()
{
	vector<vector<int>> dots = {{1, 1}, {2, 1}, {2, 2}, {1, 2}};
	cout << solution(dots);
	return 0;
}