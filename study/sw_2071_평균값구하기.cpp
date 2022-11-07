#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t, num, ans;
	double sum=0.0;
	scanf("%d", &t);
	for (int j=1; j<=t; j++){
		for (int i=0; i<10; i++){
			scanf("%d", &num);
			sum+=num;
		}
		ans = (sum/10)+0.5;
		printf("#%d %d\n", j, ans);
		sum=0.0; 
	}
	return 0;
}