#include <stdio.h>
#include <string.h>

char a[10002], b[10002], ans[10005];
int ToInt(char c)
{
	return (c - '0');
}

int main()
{
	int len_a, len_b, maxVal, i, carry;
	scanf("%s %s", a, b);
	len_a = strlen(a); len_b = strlen(b);	
	maxVal = (len_a > len_b) ? len_a : len_b;
	i = 1; carry = 0;
	while (i <= maxVal)
	{
		if (i <= len_a && i <= len_b)
		{
			carry += ToInt(a[len_a - i]) + ToInt(b[len_b - i]);
		}
		else if (i <= len_a && i > len_b)
		{
			carry += ToInt(a[len_a - i]);
		}
		else if (i > len_a && i <= len_b)
		{
			carry += ToInt(b[len_b - i]);
		}
		ans[maxVal - i] = carry%10 + '0';
		if (carry/10 > 0)
			carry = carry/10;
		else
			carry = 0;
		i++;
	}
	if (carry > 0)
	{
		for (i=maxVal; i>0; i--)
		{
			ans[i] = ans[i-1];
		}
		ans[i] = carry + '0';
	}
	printf("%s\n", ans);
	return 0;
}