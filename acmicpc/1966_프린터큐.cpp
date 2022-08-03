#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int solution(queue<pair<int, int>> q, int order, vector<int> priority)
{
	int answer = 0, _max;
	pair<int, int> tmp;

	sort(priority.begin(), priority.end());
	while (!q.empty())
	{
		_max = priority[priority.size()-1];
		tmp = q.front();
		if (tmp.second < _max) {
			q.push(tmp);
		} else {
			priority.pop_back();
			answer++;
			if (tmp.first == order) break;
		}
		q.pop();
	}
	return answer;
}

int main()
{
	int t, n, order, tmp;
	queue<pair<int, int>> q;
	vector<int> priority;

	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n >> order;
		for (int j = 0; j < n; j++)
		{
			cin >> tmp;
			priority.push_back(tmp);
			q.push(make_pair(j, tmp));
		}
		cout << solution(q, order, priority) << "\n";
		while (!q.empty()) q.pop();
		priority.clear();
	}
	return 0;
}