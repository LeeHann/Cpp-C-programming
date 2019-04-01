#include <stdio.h>
#include <math.h>
#define MAX_SIZE 101

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void sort(int list[], int n)
{
	int i, j, min;
	for (i=0; i<n-1; i++)
	{
		min=i;
		for (j=i+1; j<n; j++)
			if(list[j] < list[min]) min = j;
		swap(&list[i], &list[min]);
	}
}
int main()
{
	int i, n;
	int list[MAX_SIZE];
	printf("Enter the number of numbers to generate: ");
	scanf("%d", &n);
	for (i=0; i<n; i++)
	{
		scanf("%d", &list[i]);
	}
	sort(list, n);
	printf("\n Sorted array:\n");
	for (i=0; i<n; i++)
		printf("%d ", list[i]);
	printf("\n");
	
	return 0;
}
