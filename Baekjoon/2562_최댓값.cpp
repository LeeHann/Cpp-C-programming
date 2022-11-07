#include <bits/stdc++.h>

using namespace std;

int num[10];

int main()
{
	int max=0, pos;
	for(int i=0; i<9; i++)
	{
		scanf("%d", &num[i]);
		if(num[i]>=max)
		{
			max=num[i];
			pos=i+1;
		}
	}
	printf("%d\n%d", max, pos);
	return 0;
}
