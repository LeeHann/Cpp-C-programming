#include <stdio.h>
#include <math.h>

int X[100001];
int Y[100001];
int V[100001];
int n[100001];

int main(void)
{
	int N, i, tmp=0, result=0;
	double x, y, z;
	scanf("%d\n", &N);
	
	for (i=0; i<N; i++)
	{
		scanf("%d %d %d\n", &X[i], &Y[i], V[i]);
		x=pow(X[i], 2);
		y=pow(Y[i], 2);
		z=sqrt(x+y);
		n[i]=V[i]-z;
		
		if (n[i]<n[i+1])
		{
			tmp=n[i];
			result=n[i+1];
			n[i]=result;
			n[i+1]=tmp;
		}
	}
	for (i=0; i<N; i++)
	{
		printf("%d\n", n[i]);
	}
	return 0;
}
