#include <stdio.h>
#include <string.h>
#define SEN_SIZE 100
//한줄을 읽고 문자열의 공백포함 글자수를 세는 프로그램 
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
