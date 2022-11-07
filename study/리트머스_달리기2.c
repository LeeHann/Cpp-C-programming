#include <stdio.h>
#include <string.h>
struct stu
{
	char name[21];
	int sec;
};

int main()
{
	int n, i;
	struct stu s[31];
	char cmd[21];
	scanf("%d\n", &n);
	for(i=0; i<n; i++)
	{
		gets(s[i].name);
		scanf("%d\n", &s[i].sec);
	}
	gets(cmd);
	for(i=0; i<n; i++)
	{
		if(strcmp(s[i].name, cmd)==0)
			printf("%d", s[i].sec);
	}
	return 0;
}
