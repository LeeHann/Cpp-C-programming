#include <bits/stdc++.h>
using namespace std;
int num[10001];
void d(int n){
	int tmp = n;
	if(n<10){
		tmp += n;
		num[tmp] = 1;
	}
	else if(n>=10 && n<100){
		tmp += (n/10 + n%10);
		num[tmp] = 1;
	}
	else if(n>=100 && n<1000){
		tmp += n/100;
		n = n%100;
		tmp += (n/10 + n%10);
		num[tmp] = 1;
	}
	else if(n>=1000 && n<10000){
		tmp += n/1000;
		n = n%1000;
		tmp += n/100;
		n = n%100;
		tmp += (n/10 + n%10);
		num[tmp] = 1;
	}
}
int main(){
	for(int i=1; i<=10000; i++){
		d(i);
	}
	for(int i=1; i<=10000; i++){
		if(num[i] == 0) printf("%d\n", i);
	}
	return 0;
}
