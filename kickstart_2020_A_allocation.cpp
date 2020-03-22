#include <bits/stdc++.h>
using namespace std;
int num[100001];
int main(){
	int t, x=1;
	scanf("%d", &t);
	while(t--){
		int n, b;
		scanf(" %d %d", &n, &b);
		memset(num, 0, sizeof(num));
		for(int j=0; j<n; j++)
			scanf(" %d", &num[j]);
		sort(num, num+n);
		int y=0;
		for(int j=0; j<n; j++){
			if(b >= num[j])
			{
				b -= num[j];
				y++;
			}
		}
		printf("Case #%d: %d\n", x, y);
		x++;
	} 
	return 0;
}
