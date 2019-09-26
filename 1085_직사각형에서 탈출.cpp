#include <bits/stdc++.h>
using namespace std;
int main(){
	int x, y, w, h, min=1001; cin >> x >> y >> w >> h;
	if (min>=(w-x) && (w-x)>=0) min=w-x;
	if (min>=x) min=x;
	if (min>=y) min=y;
	if (min>=(h-y) && (h-y)>=0) min=h-y;
	cout << min;
	return 0;
}
