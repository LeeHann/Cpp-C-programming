#include <stdio.h>

int main()
{
	int menu;
	float i, ans;
	scanf("%d\n%f", &menu, &i);
	if (menu==1)
	{
		ans=i*3.3;
		printf("%.3f Pyong = %.3f Square-meter", i, ans);
	}
	else if(menu==2)
	{
		ans=i/3.3;
		printf("%.3f Square-meter = %.3f Pyong", i, ans);
	}
	return 0;
}
