#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#define MAX_SIZE 24
#define FALSE 0
#define TRUE 1
#define MALLOC(p,s) if(!(p=malloc(s))){fprintf(std,"error");}

typedef struct node *nodePointer;
typedef struct node{
	int data;
	nodePointer link;
};
int main()
{
	short int out[MAX_SIZE];
	nodePointer seq[MAX_SIZE];
	nodePointer x, y, top;
	int i, j, n;
	
	printf("Enter the size (<= %d) ", MAX_SIZE);
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
	/*seq�� out�� �ʱ�ȭ*/
		out[i] = TRUE; seq[i]=NULL; 
	}
	
	/*�ܰ� 1 : ��ġ �ֵ��� �Է�*/
	printf("Enter a pair of numbers (-1 -1 to quit): ");
	scanf("%d%d", &i, &j);
	while (i>=0){
		MALLOC(x, sizeof(struct node)); 
		x->data=j; x->link=seq[i]; seq[i]=x;
		MALLOC(x, sizeof(struct node));
		x->data=i; x->link=seq[i]; seq[j]=x;
		printf("Enter a pair of numbers(-1 -1 to quit): ");
		scanf("%d%d", &i, &j);
	}
	
	/*�ܰ� 2 : ��ġ �η����� ���*/
	for(i=0; i<n; i++)
	if(out[i]){
		printf("\nNew class: %5d", i);
		out[i] = FALSE; /*�η����� FALSE�� ����*/
		x=seq[i]; top = NULL; /*������ �ʱ�ȭ*/ 
		for(;;){/*������ �η� ã��*/ 
			while(x){/*����Ʈ ó��*/
			j=x->data;
			if(out[j]){
				printf("%5d", j); out[j] = FALSE;
				y=x->link; x->link=top; top=x; x=y;
			}
			else x=x->link;
			} 
		if(!top) break;
		x = seq[top->data]; top=top->link;/*���ÿ��� ����*/ 
		}
	} 
	return 0;
}
