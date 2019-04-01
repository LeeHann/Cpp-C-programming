#include <bits/stdc++.h>
using namespace std;
int main()
{
	char ss[4409];
	int i=0;
	scanf("%s", ss); 
	while (i<4409)
	{
		if (ss[i]=='0') printf("00");
		else if (ss[i] == '1') printf("01");
		else if (ss[i] == '2') printf("10");
		else if (ss[i] == '3') printf("11");
		i++;
	}
	return 0;
}
