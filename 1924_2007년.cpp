#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x,y, day=0;
	scanf("%d%d", &x, &y);
	while (x>1)
	{
		if (x==2 || x==4 || x==6 || x==8 || x==9 || x==11)
		{
			x-=1;
			day+=31;
		}
		else if (x==5 || x==7 || x==10 || x==12)
		{
			x-=1;
			day+=30;
		}
		else if (x==3)
		{
			x-=1;
			day+=28;
		}
	}
	day+=y;
	switch (day%7)
	{
		case 1 : printf("MON"); break;
		case 2 : printf("TUE"); break;
		case 3 : printf("WED"); break;
		case 4 : printf("THU"); break;
		case 5 : printf("FRI"); break;
		case 6 : printf("SAT"); break;
		case 0 : printf("SUN"); break;
		default : break;
	}
	return 0;
}
