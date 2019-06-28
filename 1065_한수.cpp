#include <bits/stdc++.h>
using namespace std;

int num[5];

void find(int n){
	if (n<100) printf("%d", n);
	else {
		int tmp=n;
		if (n>=100 && n<1000){
			int cnt=99;
			while(tmp>100){
				n=tmp;
				for (int i=0; i<3; i++){
					num[i]=n%10;
					n/=10;
				}
				if (num[1] == (num[0]+num[2])*0.5) cnt++;
				tmp--;
			}
			printf("%d", cnt);
		}
		else printf("%d", 144);
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	find(n);
	return 0;
}
