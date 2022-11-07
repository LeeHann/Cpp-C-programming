#include <bits/stdc++.h>
using namespace std;
int n, cnt, dcnt=0;
int num[26][26];
bool ck[26][26];

void dfs(int y, int x){
	cnt++;
	ck[y][x] = true;
	if(y-1<n && y-1>=0 && !ck[y-1][x] && num[y-1][x]){
		dfs(y-1, x);
	}
	if(y+1<n && y+1>=0 && !ck[y+1][x] && num[y+1][x]){
		dfs(y+1, x);
	}
	if(x-1<n && x-1>=0 && !ck[y][x-1] && num[y][x-1]){
		dfs(y, x-1);
	}
	if(x+1<n && x+1>=0 && !ck[y][x+1] && num[y][x+1]){
		dfs(y, x+1);
	}
}

int main(){
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			scanf(" %1d", &num[i][j]);
		}
	}
	vector<int> v;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(num[i][j] && !ck[i][j]){
				dcnt++;
				cnt=0;
				dfs(i, j);
				v.push_back(cnt);
			}
		}
	}
	sort(v.begin(), v.end());
	printf("%d\n", dcnt);
	for(int i=0; i<v.size(); i++){
		printf("%d\n", v[i]);
	}
	return 0;
}
