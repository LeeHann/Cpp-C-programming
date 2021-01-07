#include <bits/stdc++.h>
using namespace std;
char ab[100001];

int main(){
	int t;
	scanf(" %d", &t);
	while(t--){
		memset(ab, 0, sizeof(ab));
		int n, k, fst=2, sec=0;
		scanf(" %d %d", &n, &k);
		sec = k;	
		while(sec>=fst){
			sec -= (fst-1);
			fst++;	
			if(sec==0) sec = 1;	
		}
		for(int i=0; i<n; i++){
			if(i==(n-fst) || i==(n-sec)) ab[i] = 'b';
			else ab[i] = 'a';
		}
		printf("%s\n", ab);
	}	
	return 0;
}
