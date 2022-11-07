#include <bits/stdc++.h>
using namespace std;
int room[101];
int main(){
	int t; cin >> t;
	for (int i=1; i<=t; i++){
		int n, cnt=0; cin >> n;//방 갯수만큼 진행한 다음 상범이가 잔다 
		for (int j=1; j<=n; j++){
			for(int k=j; k<=n; k++){
				if (k%j==0) {
					if(room[k]==0) room[k]=1;
					else room[k]=0;
				}
			}
		}
		for(int j=1; j<=n; j++)
			if(room[j]==1)//열림 1 
					cnt++;
		cout << cnt << endl;
		for (int j=1; j<=n; j++) room[j]=0;
	}
	return 0;
}
