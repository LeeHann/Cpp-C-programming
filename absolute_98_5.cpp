#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char sen[21] = "TOO+TOO+TOO+TOO=GOOD";
	int t=0,o=0,g=0,d=0;
		for(int l=0; l<10; l++)
		{
			for(int k=0; k<10; k++)
			{
				for(int j=0; j<10; j++)
				{
					for(int i=0; i<10; i++)
					{
						t=i;
						if (t*100*4+o*10*4+o*4!=g*1000+o*100+o*10+d) break;
					}
					o=j;
				}
				g=k;
			}
			d=l;
		}
	printf("T=%d O=%d G=%d D=%d", t, o, g, d);
	return 0;
}
