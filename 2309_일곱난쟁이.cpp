#include <bits/stdc++.h>
using namespace std;
int dwarf[10];
int main(){
	int i, sum=0, sum_1;
	for (i=0; i<9; i++){
		cin >> dwarf[i];
		sum+=dwarf[i];
	}
	sort(dwarf, dwarf+i);
	for (i=0; i<9; i++){
		for (int j=1; j<9; j++){
			if(i==j) continue;
			sum_1 -= (dwarf[i]+dwarf[j]); 
			if (sum_1==100){
				dwarf[i]=0; dwarf[j]=0;
				for (int k=0; k<9; k++) if(dwarf[k]) cout << dwarf[k] << endl;
				return 0;
			}
			sum_1=sum;
		}
	}
}
