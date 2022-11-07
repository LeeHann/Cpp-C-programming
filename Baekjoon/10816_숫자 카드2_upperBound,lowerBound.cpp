#include <bits/stdc++.h>
using namespace std;
int card[500001];

int lower(int _dec, int size){ 
	int mid, left=0, right = size;
	
	while (right>left){
		mid = (left+right)/2;
		if(card[mid]>=_dec) right = mid;
		else left = mid+1;
	}
	return right;
}
int upper(int _dec, int size){
	int mid, left=0, right = size;
	
	while(right>left){
		mid = (left+right)/2;
		if(card[mid]>_dec) right=mid;
		else left = mid+1;
	}
	return right;
}

int main(){
	int n, m, dec;
	
	scanf(" %d", &n);
	for(int i=0; i<n; i++)
		scanf(" %d", &card[i]);
	sort(card, card+n);
	
	scanf(" %d", &m);
	int right = n;
	for(int i=0; i<m; i++){
		scanf(" %d", &dec);
		int up = upper(dec, right-1), low = lower(dec, right-1);
		if(up == n-1 && card[n-1] == dec) up++;
		printf("%d ", up-low);
	}
	return 0;
}
