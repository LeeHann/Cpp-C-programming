#include <bits/stdc++.h>
using namespace std;
int scale[9];
int main(){
	int a_cnt=0, d_cnt=0;
	for(int i=1; i<9; i++){
		cin >> scale[i];
		if(scale[i]-scale[i-1]==1) a_cnt++;
		else if(scale[i]-scale[i-1]==-1) d_cnt++;
	}
	if(a_cnt==8) cout << "ascending" << endl;
	else if (d_cnt==7) cout << "descending" << endl;
	else cout << "mixed" << endl;
	return 0;
}
