#include <bits/stdc++.h>
using namespace std;
vector<int> v[1001];
int visit[1001];

void BFS(int num){
	queue<int> q;
	q.push(num);
	visit[num] = 1;
	
	while(!q.empty()){
		int x = q.front();
		q.pop();
		for(int i=0; i<v[x].size(); i++){
			int y = v[x][i];
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
	
	int n, m; cin >> n >> m;
	for(int i=0; i<m; i++){
		int a, b;
		cin >> a >> b; 
		v[a].push_back(b);
		v[b].push_back(a);
	}
	
	int cnt = 0;
	for(int i=1; i<=n; i++){
		if(!visit[i]){
			BFS(i);
			cnt++;
		}
	}
	
	cout << cnt << "\n";
	return 0;
}
