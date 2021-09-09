#include <stdio.h>

int calAvg(int score[])
{
	int num, i;
	num = 0;
	for (i=0; i<5; i++)
	{
		if (score[i] < 40)
			num += 40;
		else
			num += score[i];
	}
	return num/5;
}

int main()
{
	int i;
	int score[5];
	for (i=0; i<5; i++)
	{
		scanf("%d", &score[i]);
	}
	printf("%d\n", calAvg(score));
	return 0;
}