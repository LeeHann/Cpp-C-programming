#include <stdio.h>
#include <string.h>

struct cht
{
	char c[4][101];	
};

int main()
{
	struct cht _cht;
	int i, j;
	gets(_cht.c[1]);
	gets(_cht.c[2]);
	gets(_cht.c[3]);
	scanf("%d", &i);
	for(j=strlen(_cht.c[i]); j>0; j--)
	{
		printf("%c", _cht.c[i][j-1]);//뒤집힌 문자열 출력		
	}	
	return 0;
}
