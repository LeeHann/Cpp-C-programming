#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, sum=0; cin >> n;
	for (int i=1; i<=n; i++){
		int j=i, ten=1;//십의 자리 
		while (j/10 > 0){
			ten++;
			j/=10; 
		} 
		sum+=ten;
	}
	cout << sum;
	return 0;
}
