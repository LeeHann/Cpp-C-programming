#include <bits/stdc++.h>
using namespace std;
string name;
int alp[26]; //���ĺ� �빮���� ���� ����
string ck_char;
int ck = 0;//���ĺ� Ȧ�� ���� üũ 

int main(){
	cin >> name;
	
	//�Ӹ������ �� �� ���� ���
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
	
	//�Ӹ������ �� �� �ִ� ���	
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
