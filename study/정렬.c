#include <stdio.h>

int n[1001];
int m[1001];
 
int main()
{ 
	int N, tmp=1000, i, j;
	
	scanf("%d\n", &N);	//수의 개수를 입력 받는다.
	 
	for (i=0; i<N; i++)
	{
		scanf("%d\n", &n[i]);	//N개의 수가 주어진다. 
	}
	for (j=0; j<N; j++)
	{
		for (i=0; i<N; i++)
		{
			if (tmp>n[i])
			{
				tmp=n[i];	//가장 작은것을 찾는다.
				printf("%d\n", tmp); 
			} 	
		}
		m[j]=tmp;	//가장 작것을 맨앞 에 놓는다.
	}
	for (i=0; i<N; i++)
	{
		printf("%d\n",m[i]);
	}

	return 0;
}
