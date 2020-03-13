#include <bits/stdc++.h>
using namespace std;
int alp[27];
int main(){
	string name;
	cin >> name;
	for(int i=0; i<name.size(); i++){
		if(name[i]>'Z') alp[name[i]-'a']++; 
		else alp[name[i]-'A']++;
	}
	char max_alp;
	int max = 0;
	for(int i=0; i<27; i++){
		if(alp[i] > max){
			max = alp[i];
			max_alp = (i+'A');
		}
		else if(alp[i] == max){
			max_alp = '?';
		}
	}
	printf("%c", max_alp);
	return 0;
} 
