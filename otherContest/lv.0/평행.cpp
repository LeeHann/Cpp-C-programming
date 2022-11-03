#include <string>
#include <vector>
#include <iostream>

using namespace std;

// y = ax + b 에서 a가 같으면 서로 평행
int solution(vector<vector<int>> dots) {
	vector<vector<int>> grad;
	for (int i = 0; i < dots.size(); i++)
	{
		for (int j = i + 1; j < dots.size(); j++)
		{
			int x = dots[i][0] - dots[j][0];
			int y = dots[i][1] - dots[j][1];
			for (auto g : grad)
			{
				if (g[0] == x && g[1] == y)
					return 1;
				if ((double)x/y == (double)g[0]/g[1])
					return 1;
			}
			grad.push_back({x, y});
		}
	}
    return 0;
}

int main(int argc, char const *argv[])
{
	vector<vector<int>> dots = {{1, 1}, {5, 1}, {1, 10}, {3, 10}};
	cout << solution(dots);
	return 0;
}
