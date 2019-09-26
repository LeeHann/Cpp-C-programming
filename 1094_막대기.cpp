#include <bits/stdc++.h>
using namespace std;
int main(){
	int x, rest=64, half, cnt=0, sum=0; cin >> x;
	while (1){//half=rest/2
	if(x==64) {cnt=1; break;}
		half=rest/2;
		if (half+sum>x) {
			rest-=half;
			continue;
		}
		cnt++; rest=half; sum+=half;
		if(sum==x) break;
	}
	cout << cnt;
	return 0;
}
