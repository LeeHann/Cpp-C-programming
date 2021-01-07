#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n, minus=1;
	int room = 1;
	
	scanf(" %d", &n);
	
	while(n>minus){ 
		minus += room*6;
		room++; 
	}
	printf("%d\n", room);
	return 0;
}
