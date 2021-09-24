#include <stdio.h>

int main()
{
	int i=0, sum=0;
	char str[101];
	scanf("%s", str);
	while (str[i])
	{
		if (str[i] == 'c' || str[i] == 's' || str[i] == 'z')
		{
			if (str[i+1] && str[i+1]== '=')
			{
				sum++; i+=2; continue;
			}
		}
		if (str[i] == 'c' || str[i] == 'd')
		{
			if (str[i+1] && str[i+1] == '-')
			{
				sum++; i+=2; continue;
			}
		}
		if (str[i] == 'd')
		{
			if (str[i+1] && str[i+1] == 'z' && str[i+2] && str[i+2] == '=')
			{
				sum++; i+=3; continue;
			}
			else if (str[i+1] && str[i+1] == '-')
			{
				sum++; i+=2; continue;
			}
		}
		if (str[i] == 'l' || str[i] == 'n')
		{
			if (str[i+1] && str[i+1] == 'j')
			{
				sum++; i+=2; continue;
			}
		}
		sum++;
		i++;
	}
	printf("%d\n", sum);
	return 0;
}