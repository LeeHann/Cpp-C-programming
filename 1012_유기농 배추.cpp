#include <bits/stdc++.h>
using namespace std;
int n, m, k, cnt;
int num[51][51], ck[51][51];

void dfs(int x, int y){
	ck[x][y] = 1;
	if(y-1>=0 && y-1<=n && !ck[x][y-1] && num[x][y-1]) dfs(x, y-1);
	if(y+1<=n && y+1>=0 && !ck[x][y+1] && num[x][y+1]) dfs(x, y+1);
	if(x-1>=0 && x-1<=m && !ck[x-1][y] && num[x-1][y]) dfs(x-1, y);
	if(x+1<=m && x+1>=0 && !ck[x+1][y] && num[x+1][y]) dfs(x+1, y);
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		scanf(" %d %d %d", &m, &n, &k);
		int x, y, cnt = 0;
		for(int i=0; i<k; i++){
			scanf(" %d %d", &x, &y);
			num[x][y] = 1;
		}
		for(int i=0; i<=m; i++){
			for(int j=0; j<=n; j++){
				if(num[i][j] && !ck[i][j]){
					dfs(i, j);
					cnt++;
				}
			}
		}
		printf("%d\n", cnt);
		memset(num, 0, sizeof(num));
		memset(ck, 0, sizeof(ck)); 
	}
	return 0;
}
