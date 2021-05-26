#include <stdio.h>

void f(int num1, int num2, int num3, int num4)
{
	int max;
	if(num1>num2)
	{
		if(num3>num4)
		{
			if(num1>num3)
			{
				max=num1;
			}
			else
			{
				max=num3;
			}
		}
		else
		{
			if(num1>num4)
			{
				max=num1;
			}
			else
			{
				max=num4;
			}
		}
	}
	else
	{
		if(num3>num4)
		{
			if(num2>num3)
			{
				max=num2;
			}
			else
			{
				max=num3;
			}
		}
		else
		{
			if(num2>num4)
			{
				max=num2;
			}
			else
			{
				max=num4;
			}
		}
	}
	printf("%d", max);
}


int main()
{
	int num1, num2, num3, num4;
	scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
	f(num1, num2, num3, num4);
	return 0;
}
