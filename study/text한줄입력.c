#include <stdio.h>
#include <fstream> 
#define N 100 //입력받을 데이터 크기
 
void main()
{
   FILE *pfile;
   char str[N];
 
   fp = fopen("C:\\Users\\이한나\\Documents\\text.txt", "r");  // 파일 열기
 
   while(!feof(pfile))  // 파일의 끝이 아니라면
   {
       fgets(str, 80, pfile);  // 최대 80칸짜리 한줄 읽기
       puts(str);  // 한줄 출력
   }
 
   fclose(pfile);
 
}

