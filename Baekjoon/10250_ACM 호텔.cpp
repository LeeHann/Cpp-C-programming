#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	scanf(" %d", &t);
	for(int i=0; i<t; i++){
		int h, w, n, _h=0, _w=1;
		scanf(" %d %d %d", &h, &w, &n);
		while(n--){
			_h++;
			if(_h > h){
				_h = 1;
				_w++;
			}
		}
		printf("%d\n", _h*100+_w);
	}
	return 0;
}
