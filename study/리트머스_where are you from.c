#include <stdio.h>
#include <string.h>

struct student
{
	char name[31];
	char area[31];
};
int main()
{
	struct student stu[11];
	int i;
	char name1[31];
	for(i=0; i<10; i++)
	{
		gets(stu[i].name);
		gets(stu[i].area);	
	}
	gets(name1);
	for(i=0; i<10; i++)
	{
		if(strcmp(stu[i].name, name1)==0)
		{
			printf("%s", stu[i].area);
			break;
		}
	}
	return 0;
} 
