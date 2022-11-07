#include <bits/stdc++.h>
using namespace std;
string name;
int alp[26]; //알파벳 대문자의 갯수 세기
string ck_char;
int ck = 0;//알파벳 홀수 갯수 체크 

int main(){
	cin >> name;
	
	//팰린드롬이 될 수 없는 경우
	for(int i=0; i<name.size(); i++){
		alp[name[i]-'A']++;
	}
	for(int i=0; i<26; i++){
		if(alp[i]%2 != 0) {
			ck++;
			ck_char = i + 'A';	
		}
	}
	if(ck > 1) {
		printf("I'm Sorry Hansoo\n");
		return 0;
	}
	
	//팰린드롬이 될 수 있는 경우	
	string ans;
	for(int i=0; i<26; i++){
		if(alp[i]){
			for(int j=0; j<alp[i]/2; j++)
				ans = ans +char(i+'A');
		}
	}
	ans = ans + ck_char;
	for(int i=25; i>=0; i--){
		if(alp[i]){
			for(int j=0; j<alp[i]/2; j++)
				ans = ans + char(i+'A');
		}
	}
	cout << ans;
	return 0;
}
