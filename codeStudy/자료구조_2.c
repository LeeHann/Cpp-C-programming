#include <stdio.h>
int main()
{
	int list2[3][5] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}};
	int *plist[3];
	int **pp;
	int i, j;
	plist[0] = &list2[0];
	plist[1] = &list2[1];
	plist[2] = &list2[2];
	printf("%d", plist[0][2]);
	return 0;
}
