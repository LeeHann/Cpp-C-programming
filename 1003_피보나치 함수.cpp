#include <iostream>
using namespace std;

int ch[41]={0,1,};

int f(int n){
	if (n<=1) {
		return n;
	}
	if (ch[n]) return ch[n];
	return ch[n] = f(n-1)+f(n-2);
}
int main(){
	int t, n; 
	cin >> t;
	for (int i=1; i<=t; i++){
		cin >> n;
		if (n==0)
			printf("1 0\n");
		else if (n==1)
			printf("0 1\n");
		else{
			f(n);
			printf("%d %d\n", ch[n-1], ch[n]);
		}
	}
	return 0;
}