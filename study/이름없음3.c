#include <stdio.h>

int main()
{
	int menu;
	float sm, p, lit, g, cm, i;
	scanf("%d", &menu);
	if(menu==1)
	{
		scanf("%f", &sm);
		p=sm/3.3;
		printf("%.3f Square-meter = %.3f Pyong\n", sm, p);
	}
	else if(menu==2)
	{
		scanf("%f", &lit);
		g=lit/3.785412;
		printf("%.3f L = %.3f Gallon\n", lit, g);
	}
	else if(menu==3)
	{
		scanf("%f", &cm);
		i=cm/2.54;
		printf("%.3f CM = %.3f Inch\n", cm, i);
	}
	return 0;
}
