#include <bits/stdc++.h>
using namespace std;
int num[101];
bool ck[101][1001]; //°î °¹¼ö, º¼·ý 

int main(){
	int n, s, m; cin >> n >> s >> m;
	for(int i=0; i<n; i++) cin >> num[i];
	
	ck[0][s] = true;
	
	for(int i=1; i<=n; i++){
		for(int j=0; j<=m; j++){
			if(ck[i-1][j]){
				if(j+num[i-1] <= m) ck[i][j+num[i-1]] = true;
				if(j-num[i-1] >= 0) ck[i][j-num[i-1]] = true;
			}
		}
	}
	
	int ans = -1;
	for(int i=0; i<=m; i++){
		if(ck[n][i]) ans = i;
	}
	cout << ans;
		
	return 0;
}
