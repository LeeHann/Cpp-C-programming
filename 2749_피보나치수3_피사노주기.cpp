#include <bits/stdc++.h>
using namespace std;
int p(int m)
{
	int cnt = 0, a=0, b=1; 
	do{
		int tmp = b;
		b= (a+b)%m;
		a=tmp;
		cnt++;
	}while(a!=0 || b!=1);
	return cnt;
}
int main()
{
	int m;
	scanf("%d", &m);
	printf("%d", p(m));
	return 0;
} 
