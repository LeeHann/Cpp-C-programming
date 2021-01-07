#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, m;
	scanf(" %d %d", &n, &m);
	map<string, int> mp;
	for(int i=0; i<n; i++){
		string name;
		cin >> name;
		mp[name] = 1;
	}
	int cnt = 0;
	for(int i=0; i<m; i++){
		string name; 
		cin >> name;
		if(mp[name] == 1){
			mp[name] = 2;
			cnt++;
		}
	}
	printf("%d\n", cnt);
	for(map<string, int>::iterator it = mp.begin(); it != mp.end(); it++){
		if( (*it).second == 2){
			cout << (*it).first << "\n";
		}
	}
	return 0;
}
