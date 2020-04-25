#include <bits/stdc++.h>
using namespace std;
int visit[1001];
vector<int> vec[1001];

int BFS(int b){
	int cnt = 0;
	queue<int> q;
	q.push(b);
	visit[b] = 1;
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
	return cnt;
}
int main(){
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		for(int i=0; i<m; i++){
			int a, b; cin >> a >> b;
			vec[a].push_back(b);
			vec[b].push_back(a);
		}
		cout << BFS(1) << "\n";
		memset(visit, 0, sizeof(visit));
		for(int i=0; i<n+1; i++){
			vec[i].clear();
		}
	}
	
	return 0;
}
