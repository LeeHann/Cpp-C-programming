#include <stdio.h>
#include <string.h>
#define SEN_SIZE 100
//������ �а� ���ڿ��� �������� ���ڼ��� ���� ���α׷� 
char sen[100];
int main()
{
	while(1)
	{
		printf("$ ");
		fgets(sen, SEN_SIZE, stdin);
		sen[strlen(sen)-1]='\0'; 
		printf("%s:%d\n", sen, strlen(sen));
	}
	return 0;
}
