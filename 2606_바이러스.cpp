#include <bits/stdc++.h>
using namespace std;
vector<int> vec[101];
int visit[101];
int cnt = 0;

void BFS(int v){
	queue<int> q;
	q.push(v);
	visit[v] = 1;
	
	while(!q.empty()){
		int x = q.front();
		q.pop();
		for(int i=0; i<vec[x].size(); i++){
			int y = vec[x][i];
			if(!visit[y]){
				q.push(y);
				visit[y] = 1;
				cnt++;
			}
		}
	}
}

int main(){
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n, m; cin >> n >> m;	
	for(int i=0; i<m; i++){
		int a, b;
		cin >> a >> b;
		vec[a].push_back(b);
		vec[b].push_back(a);
	}
	
	BFS(1); 
	
	cout << cnt << '\n';
	return 0;
}
