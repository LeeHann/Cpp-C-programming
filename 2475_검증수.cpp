#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a1, a2 , a3, a4, a5;
	scanf("%d %d %d %d %d", &a1, &a2, &a3, &a4, &a5);
	int sum = (a1*a1)+(a2*a2)+(a3*a3)+(a4*a4)+(a5*a5);
	printf("%d", sum%10);
	return 0;
}
