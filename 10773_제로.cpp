#include <bits/stdc++.h>
using namespace std;
int jungsu[100001];
int main(){
	int k, i=0; scanf("%d", &k);
	while(k>0){
		cin >> jungsu[i];
		if(jungsu[i]==0){
			jungsu[i-1] = 0;
			i--;
		}
		else i++;
		k--; 
	}
	int sum = 0;
	for(i=0; jungsu[i]; i++){
		sum+=jungsu[i];
	}
	cout << sum;
	return 0;
}
