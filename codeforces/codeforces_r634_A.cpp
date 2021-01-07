#include <bits/stdc++.h>
using namespace std;


int main(){
	int t;
	long long n;
	scanf(" %d", &t);
		
	while(t--){
		long long a, b, cnt = 0;
		scanf(" %lld", &n);
		if(n%2){
			a = n/2 +1;
			b = n/2;
			
		}
		else{
			a = n/2 +1;
			b = n/2 -1;
		}
		if(b<0){
				printf("%lld\n", cnt);
				continue;
		}
		for(int i=a; i<n; i++){
			a++;
			b--;
			cnt++;
		}
		printf("%lld\n", cnt);
	}
	return 0;
}
