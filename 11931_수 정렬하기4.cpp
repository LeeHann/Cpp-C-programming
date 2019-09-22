#include <bits/stdc++.h>
using namespace std;
int num[1000001];
bool comp(const int &a, const int &b){
	return a > b;
}
int main(){
	int n; scanf("%d", &n);
	for (int i=0; i<n; i++){
		scanf("%d", &num[i]);
	}
	sort(num, num+n, comp);
	for (int i=0; i<n; i++){
		printf("%d\n", num[i]);
	}
	return 0;
}
