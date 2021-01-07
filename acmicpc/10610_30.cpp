#include <bits/stdc++.h>
using namespace std;
char three[100001];
int main(){
	int n, i, sum=0, zero=0; cin >> three;
	for (i=0; i<strlen(three); i++){
		if (three[i]=='0') zero++;
		sum+=(int)three[i];
	}
	if (sum%3!=0 || !zero) cout << "-1";
	else {
		sort(three, three+i);
		for (i--; three[i]; i--) cout << three[i];
	//	while(zero) {
	//		cout << "0";
	//		zero--;
	//	}
	}
	return 0;
}
//0이 있고 3의 배수일때 내림차순으로 정렬해서 맨뒤에 0을 붙인다. 
