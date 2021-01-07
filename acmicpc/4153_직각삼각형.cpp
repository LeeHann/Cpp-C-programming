#include <bits/stdc++.h>

using namespace std;

int main()
{
	long a, b, c;
	scanf("%ld %ld %ld", &a, &b, &c);
	while (a!=0)
	{

		if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a)
			printf("right\n");
		else
			printf("wrong\n");
		scanf("%ld %ld %ld", &a, &b, &c);
	}
	return 0;
}
