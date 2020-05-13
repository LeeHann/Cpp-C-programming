#include <bits/stdc++.h>
using namespace std;

int tomato[1001][1001];
int dy[4] = {0, 0, 1, -1};
int dx[4] = {1, -1, 0, 0};
int main(){
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int m, n; cin >> m >> n;
	queue<pair<int, int> > q;
	int kcnt = 0;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >> tomato[i][j];
			if(tomato[i][j]==1)
				q.push(make_pair(i,j)); //q.push({i,j});
			else if(tomato[i][j]==0) kcnt++;
		}
	}
	if(kcnt==0){
		cout << 0;
		return 0;
	}
	int cnt = 0;
	while(!q.empty()){
		cnt++;
		int size = q.size();
		while(size--){
			int y = q.front().first, x = q.front().second;
			q.pop();
			for(int i=0; i<4; i++){
				int ny = y+dy[i], nx = x+dx[i];
				if(ny>=n || nx>=m || ny<0 || nx<0) continue;
				if(tomato[ny][nx] == 0){
					kcnt--;
					if(kcnt==0){
						cout << cnt;
						return 0;
					}
					tomato[ny][nx] = 1;
					q.push(make_pair(ny, nx));
				}
			}
		}
	}
	if(kcnt>0) cout << -1;
	else cout << cnt;
	
	return 0;
}
