#include <stdio.h>
#include <fstream> 
#define N 100 //�Է¹��� ������ ũ��
 
void main()
{
   FILE *pfile;
   char str[N];
 
   fp = fopen("C:\\Users\\���ѳ�\\Documents\\text.txt", "r");  // ���� ����
 
   while(!feof(pfile))  // ������ ���� �ƴ϶��
   {
       fgets(str, 80, pfile);  // �ִ� 80ĭ¥�� ���� �б�
       puts(str);  // ���� ���
   }
 
   fclose(pfile);
 
}

