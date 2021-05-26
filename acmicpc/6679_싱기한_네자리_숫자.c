#include <stdio.h>

int duod[5], hexa[5];

int main()
{
	int dec=1000, duo, hex, i, sum, d, sum_12, sum_16;
	while (dec<=9999)
	{
		sum=dec;
		sum_12=dec;
		sum_16=dec;
		hex=0;
		duo=0;
		d=0;
		for (i=0; i<5; i++)
		{
				duod[i]=sum_12%12;
				sum_12/=12;
				hexa[i]=sum_16%16;
				sum_16/=16;
		}
		for (i=0; i<5; i++)
		{
			d=d+(sum%10);
			sum/=10;
			duo+=duod[i];
			hex+=hexa[i];
		}
		if(d==duo && d==hex)
		{
			printf("%d\n", dec);
		}
		dec+=1;
	}
	
	return 0;
}
