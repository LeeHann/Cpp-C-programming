#include <bits/stdc++.h>
using namespace std;
int num[1001];

void swap(int *a, int *b){
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

void bubble(int n){
	for(int last = n-1; last>=1; last--){
		for(int i=0; i<=last-1; i++){
			if(num[i]>num[i+1]) swap(num[i], num[i+1]);
		}
	}
}

int main(){
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> num[i];
	}
	bubble(n);
	for(int i=0; i<n; i++){
		cout << num[i] << "\n";
	}
	return 0;
}
