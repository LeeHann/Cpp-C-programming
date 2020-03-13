#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t; 
	for (int i=0; i<t; i++){
		char ox[81];
		scanf(" %s", ox);
		int cnt = 0, sum = 0;
		for(int j=0; j<strlen(ox); j++){
			if(ox[j] == 'O'){
				cnt++;
				sum += cnt;
			}
			else{
				cnt = 0;
			}
		}
		printf("%d\n", sum);
	}	
	return 0;
}
