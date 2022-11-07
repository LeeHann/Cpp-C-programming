#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer(2);
	for (auto k : keyinput)
	{
		if (k == "up")
			answer[1]++;
		if (k == "down")
			answer[1]--;
		if (k == "left")
			answer[0]--;
		if (k == "right")
			answer[0]++;
		if (answer[0] < -board[0]/2)
			answer[0] = -board[0]/2;
		if (answer[0] > board[0]/2)
			answer[0] = board[0]/2;
		if (answer[1] < -board[1]/2)
			answer[1] = -board[1]/2;
		if (answer[1] > board[1]/2)
			answer[1] = board[1]/2;
	}
    return answer;
}

int main()
{
	vector<string> keyinput = {"left", "right", "up", "right", "right"};
	vector<int> board = {11, 11};
	vector<int> s = solution(keyinput, board);
	for (auto i:s)
	{
		cout << i << " ";
	}
	return 0;
}