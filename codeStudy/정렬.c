#include <stdio.h>

int n[1001];
int m[1001];
 
int main()
{ 
	int N, tmp=1000, i, j;
	
	scanf("%d\n", &N);	//���� ������ �Է� �޴´�.
	 
	for (i=0; i<N; i++)
	{
		scanf("%d\n", &n[i]);	//N���� ���� �־�����. 
	}
	for (j=0; j<N; j++)
	{
		for (i=0; i<N; i++)
		{
			if (tmp>n[i])
			{
				tmp=n[i];	//���� �������� ã�´�.
				printf("%d\n", tmp); 
			} 	
		}
		m[j]=tmp;	//���� �۰��� �Ǿ� �� ���´�.
	}
	for (i=0; i<N; i++)
	{
		printf("%d\n",m[i]);
	}

	return 0;
}
