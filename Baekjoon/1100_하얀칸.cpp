#include <bits/stdc++.h>
using namespace std;
char horse[9][9];
int main(){
	int cnt=0; int i,j;
	for (i=0; i<8; i++){
		for(j=0; j<8; j++){
			cin >> horse[i][j];
		}
	}
	for(i=0; i<8; i++){
		for(j=0; j<8; j++){
			if(i%2==0 && j%2==0 && horse[i][j]=='F') cnt++;
			else if(i%2!=0 && j%2!=0 && horse[i][j]=='F') cnt++;
		}
	}
	cout << cnt;
	return 0;
}
