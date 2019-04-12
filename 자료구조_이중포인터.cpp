#include <stdio.h>
int main()
{
	int list[5] = {10,20,30,40,50};
	int *pt;
	int i;
	int list2[3][5] = {{10,20,30,40,50},{60,70,80,90,100},{110,120,13,14,15}};
	int *plist[3];
	int **pp;
	pt = &list[0];
	//for (i = 0; i<5; i++) printf("%d", *(pt+i));
	plist[0] = &list2[0][0];
	plist[1] = &list2[1][0];
	plist[2] = &list2[2][0];
	pp = plist;
	printf("%d",pp[2][2]);
}
