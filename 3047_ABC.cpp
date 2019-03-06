#include <bits/stdc++.h>

using namespace std;
int num[3];
int main()
{
	for (int i=0; i<3; i++) cin>>num[i];
	sort(num, num+3);
	char asc[3];
	scanf("%s", asc);
	for (int i=0; i<3; i++) printf("%d ", num[asc[i]-65]);
	return 0;	
} 
