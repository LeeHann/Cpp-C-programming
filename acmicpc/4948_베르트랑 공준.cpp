#include <iostream>
#include <cmath>
 
using namespace std;
//에라토스테네스의 체 
int e = sqrt(123456*2);
int ck[246913];
void calc(){
	for(int i=2; i<=e; i++){
		if(ck[i] == 1) continue;
		for(int j=i+i; j<=246912; j+=i){
			ck[j] = 1;
		}
	}
	ck[1] = 1;
}

int main(){
	int n;
	calc();
	while(true){
		scanf(" %d", &n);
		if(n == 0) break;
		int cnt=0;
		for(int i=n+1; i<=2*n; i++){
			if(ck[i]==0)
				cnt++;
		}
		printf("%d\n", cnt);
	}
	return 0;
}
