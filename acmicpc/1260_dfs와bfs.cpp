#include <bits/stdc++.h>
using namespace std;

int d1, d2;
vector<int> vec[1001];
bool ck[1001];

void dfs(int v)
{
	ck[v] = true;
	cout << v << " ";

	sort(vec[v].begin(), vec[v].end());	
	for(int i=0; i<vec[v].size(); i++)
	{
		int next = vec[v][i];
		if (ck[next] == false)
			dfs(next);
	}
}

void bfs(int v)
{
	queue<int> q;
	q.push(v);
	ck[v] = true;

	while (!q.empty())
	{
		int cur = q.front();
		q.pop();
		cout << cur << " ";

		for (int i=0; i<vec[cur].size(); i++)
		{
			int next = vec[cur][i];
			if (ck[next] == false)
			{
				ck[next] = true;
				q.push(next);
			}
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n, m, v;
	cin >> n >> m >> v;
	for (int i=0; i<m; i++)
	{
		cin >> d1 >> d2;
		vec[d1].push_back(d2);
		vec[d2].push_back(d1);
	}
	dfs(v);
	memset(ck, 0, sizeof(ck));
	cout << "\n";
	bfs(v);
	return 0;
}