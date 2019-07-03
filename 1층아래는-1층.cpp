#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, floor, sum=0, last=0;
	scanf("%d", &n);
	for (int i=0; i<n; i++){
		scanf("%d", &floor);
		if (floor>last){
			if (last>0) sum+=(floor-last);
			else{
				if(floor>0) sum+=(floor-last-1);
				else sum+=(floor-last);
			}
		}
		else {
			if (floor>0) sum+=(last-floor);
			else {
				if(last>0) sum+=(last-floor-1);
				else sum+=(last-floor);
			}
		}
		if (!i) sum=0;
		last = floor;
	}
	printf("%d", sum);
	return 0;
}
