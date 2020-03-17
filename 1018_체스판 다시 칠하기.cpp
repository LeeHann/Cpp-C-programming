#include <bits/stdc++.h>
using namespace std; 

const char white[9][9] = {"WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW",
"WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW"};
const char black[9][9] = {"BWBWBWBW","WBWBWBWB","BWBWBWBW",
"WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB"};
char arr[51][51];

int cmp_w(int i, int j){
	int cnt = 0;
	for(int x=i; x<=i+7; x++)
		for(int y=j; y<=j+7; y++)
			if(arr[x][y] != white[x-i][y-j]) cnt++;
	return cnt;
}

int cmp_b(int i, int j){
	int cnt = 0;
	for(int x=i; x<=i+7; x++)
		for(int y=j; y<=j+7; y++)
			if(arr[x][y] != black[x-i][y-j]) cnt++;
	return cnt;
}

int main(){
	int n, m;
	scanf(" %d %d", &n, &m);
	for(int i=0; i<n; i++)
		cin >> arr[i];
	
	int ans = 65;
	for(int i=0; i+7<n; i++){
		for(int j=0; j+7<m; j++){
			ans = min(ans, min(cmp_w(i, j), cmp_b(i, j)));
		}
	}	
	printf("%d\n", ans);
	return 0;
}
