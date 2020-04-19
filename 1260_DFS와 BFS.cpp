#include <bits/stdc++.h>
using namespace std;
vector<int> vec[1001];
queue<int> q;
int visit[1001];

void DFS(int v){
	if(visit[v]) return;
	visit[v] = 1;
	cout << v << " ";
	
	sort(vec[v].begin(), vec[v].end());
	for(int i=0; i<vec[v].size(); i++){
		int x = vec[v][i];
		DFS(x);
	}
}

void BFS(int v){
	memset(visit, 0, sizeof(visit));
	queue<int> q;
	q.push(v);
	visit[v] = 1;
	
	while(!q.empty()){
		int x = q.front();
		q.pop();
		cout << x << " ";
		for(int i=0; i<vec[x].size(); i++){
			int y = vec[x][i];
			if(!visit[y]){
				q.push(y);
				visit[y] = 1;
			}
		}
	}
	
}

int main(){
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n, m, v, a, b;
	cin >> n >> m >> v;
	
	for(int i=0; i<m; i++){
		cin >> a >> b;
		vec[a].push_back(b);
		vec[b].push_back(a);
	}
	
	DFS(v);
	cout << "\n";
	BFS(v);
	
	return 0;
}
