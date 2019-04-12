#include <stdio.h>
#define MAX_SIZE 101
int stack[MAX_SIZE];
int top = -1;
void stackFull()
{
//	fprintf(stderr, ¡°Stack is full, cannot add element¡±);
  //  exit(EXIT_FAILURE);
}
int stackEmpty()
{
	printf("The stack is empty"); 
	return 0;
}
void push(int item){
	if(top>=MAX_SIZE-1) stackFull();
	stack[++top] = item; 
	printf("%d\n", stack[top]);
}

int pop()
{
	if(top ==-1) return stackEmpty();
	return stack[top--];
	printf("%d\n", stack[top+1]);
}

int main()
{
	int item =3;
	push(item);
	pop();
	return 0;
}
