#include <bits/stdc++.h>
using namespace std;
string dna[1001];
int nuc[5]; // 0:a 1:c 2:g 3:t

int main(){
	int n, m, cnt=0;
	string ans;
	scanf(" %d %d", &n, &m);
	//입력 
	for(int i=0; i<n; i++)
		cin >> dna[i];
	//dna 계산 
	for(int i=0; i<m; i++){
		memset(nuc, 0, sizeof(nuc));
		for(int j=0; j<n; j++){
			switch(dna[j][i]){
				case 'A':nuc[0]++; break;
				case 'C':nuc[1]++; break;
				case 'G':nuc[2]++; break;
				case 'T':nuc[3]++; break;
			}
		}	
		int alp=0; string ck;
		for(int j=0; j<4; j++){
			if(alp < nuc[j]) {
				alp = nuc[j];
				switch(j){
					case 0: ck = 'A'; break;
					case 1: ck = 'C'; break;
					case 2: ck = 'G'; break;
					case 3: ck = 'T'; break;
				}
			}
		}
		ans.append(ck);
		cnt += n-alp;
	}
	cout << ans << "\n" << cnt;
	return 0;
}
