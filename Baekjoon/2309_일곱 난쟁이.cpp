#include <bits/stdc++.h>
using namespace std;
int num[10];
int main(){
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int cnt=0;
	for(int i=0; i<9; i++){
		cin >> num[i];
		cnt += num[i];
	}
	sort(num, num+9);
	int i, j;
	for(i=0; i<9; i++){
		int ck = cnt;
		for(j=1; j<9; j++){
			if(i==j) continue;
			ck -= num[j];
			ck -= num[i];
			if(ck == 100){
				for(int k=0; k<9; k++){
					if(k!=i || k!=j) cout << num[k] << "\n";
				}
			}
			return 0;
		} 
	}
}
