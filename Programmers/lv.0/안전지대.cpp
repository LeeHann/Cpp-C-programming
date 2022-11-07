#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> board) {
    int answer = 0;
	vector<vector<int>> dir = {
		{-1, 1}, {0, 1}, {1, 1},
		{-1, 0}, {1, 0},
		{-1, -1}, {0, -1}, {1, -1}
	};
	for (int i = 0; i < board.size(); i++)
	{
		for (int j = 0; j < board.size(); j++)
		{
			if (board[i][j] == 1)
			{
				for (auto d : dir)
				{
					if (i+d[0] < 0 || i+d[0] > board.size()-1 || 
						j+d[1] < 0 || j+d[1] > board.size()-1)
						continue;

					if (board[i + d[0]][j + d[1]] != 1)
						board[i + d[0]][j + d[1]] = 2;
				}
			}
		}
	}

	for (auto b_i : board)
		for (auto b_j : b_i)
			if (b_j == 0)
				answer++;
    return answer;
}

int main()
{
	vector<vector<int>> board = {{1, 1, 1, 1, 1, 1}, {1, 1, 1, 1, 1, 1}, {1, 1, 1, 1, 1, 1}, {1, 1, 1, 1, 1, 1}, {1, 1, 1, 1, 1, 1}, {1, 1, 1, 1, 1, 1}};
	cout << solution(board);
	return 0;
}
