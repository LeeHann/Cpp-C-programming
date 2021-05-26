#include <stdio.h>

int main()
{
	int won, rate=960;
	float dollar;
	won=35000;
	dollar=won/rate;
	printf("won: %d dollar %6.4f\n", won, dollar);
	dollar =(float) won /rate;
	printf("won: %d dollar %6.4f\n", won, dollar);
	won = dollar*rate;
	printf("won: %d dollar %6.4f\n", won, dollar);
	won= (int) (dollar*rate);
	printf("won: %d dollar %6.4f\n", won, dollar);
	won = (int) dollar * rate;
	printf("won: %d dollar %6.4f\n", won, dollar);
	return 0;
}
