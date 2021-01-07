#include <bits/stdc++.h>
using namespace std;
char str[20], tmp[20];
int main()
{
	int j, ck=0;
	scanf("%s", str);
	if (str[0] == 'x')
	{
		puts("1");
		return 0;
	}
	else if (str[0]== '-' && str[1]=='x')
	{
		printf("-1");
		return 0;
	}
	for (int i=0; i<strlen(str); i++)
	{
		if (str[i] == 'x')
		{
			ck=1;
			for (j=0; j<i; j++)
			{
				tmp[j]=str[j];
			}
			tmp[j]='\0';
			printf("%s", tmp);
		}
		
	}
	if (!ck)
	{
		printf("0");
		return 0;
	}
	return 0;
}
