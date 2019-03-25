#include <iostream>
using namespace std;
int main()
{
		for(int l=0; l<10; l++)
		{
			for(int k=0; k<10; k++)
			{
				for(int j=0; j<10; j++)
				{
					for(int i=0; i<10; i++)
					{
						if (i==0|| i==j || i==k || i==l || j==k || j==l || k==l) continue;
						if (i*100*4+j*10*4+j*4==k*1000+j*100+j*10+l) 
						{
							printf("T=%d O=%d G=%d D=%d", i, j, k, l);
							return 0;
						}
					}
				}
			}
		}
}
