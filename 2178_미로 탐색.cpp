#include <bits/stdc++.h>
using namespace std;
int num[101][101];
int cnt[101][101];
bool ck[101][101];
int dy[4] = {0, 0, 1, -1};
int dx[4] = {1, -1, 0, 0};
int n, m; 

void bfs(int x, int y){ //n, m 세로 가로 
	ck[y][x] = true;
	queue<pair<int, int> > q;
	cnt[y][x] = 1;
	q.push({y, x});
	while(!q.empty()){
		y = q.front().first, x = q.front().second;
		q.pop();
		for(int i=0; i<4; i++){
			int nx = x+dx[i];
			int ny = y+dy[i];
			if(nx >= m || nx < 0 || ny >= n || ny < 0) continue;
			if(ck[ny][nx] || !num[ny][nx]) continue;
			q.push({ny, nx});
			cnt[ny][nx] = cnt[y][x] + 1;
			ck[ny][nx] = true;
		}
	}
}

int main(){
	scanf("%d %d", &n, &m);
	for(int i=0; i<n; i++){ //세로 
		for(int j=0; j<m; j++){ //가로 
			scanf(" %1d", &num[i][j]); //세로 * 가로 
		}
	}
	bfs(0, 0);
	printf("%d\n", cnt[n-1][m-1]);
	return 0;
}
