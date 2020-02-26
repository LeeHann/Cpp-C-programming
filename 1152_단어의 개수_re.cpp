#include <bits/stdc++.h>
using namespace std;
int main(){
	string str;
	int cnt = 1;
	
	getline(cin, str);
	
	if(str[0] == ' ') cnt = 0;
	
	for(int i=0; i<str.size(); i++){
		if(str[i] == ' ') cnt++;
	}
	
	if(str[str.size()-1] == ' ') cnt-=1;
	
	cout << cnt;
	
	return 0;
}
