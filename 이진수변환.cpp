#include <stdio.h>

typedef unsigned char BYTE;

int main(void)
{
 BYTE m;
 int input, i;

 scanf("%d", &input);

 m = 0x80;
 for (i = 0; i < 8; i++) {
 if ( input & m )
 putchar('1');
 else
 putchar('0');
 m = m >> 1;
 }
 printf("\n");

 return 0;
}	
