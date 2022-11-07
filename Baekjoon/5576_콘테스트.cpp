#include <bits/stdc++.h>

using namespace std;

int main()
{
	int num[20], sum1=0, sum2=0;
	for (int i=0; i<10; i++) scanf("%d", &num[i]);
	sort(num, num+10);
	sum1=num[9]+num[8]+num[7];
	for (int i=0; i<10; i++) scanf("%d", &num[i]);
	sort(num, num+10);
	sum2=num[9]+num[8]+num[7];
	printf("%d %d", sum1, sum2);
	return 0;
 } 
