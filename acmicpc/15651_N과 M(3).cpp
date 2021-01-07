#include <bits/stdc++.h>
using namespace std;
int n, m;
int num[10], ck[10];

void f(int pos){ // 중복조합 
	if(pos == m){
		for(int i=0; i<m; i++){
			cout << num[i] << " ";
		}
		cout << "\n";
		return ;
	}
	
	for(int i=0; i<n; i++){
		num[pos] = i + 1;
		f(pos+1);
	}	
}

int main(){
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> n >> m; 
	f(0);
	return 0;
}
