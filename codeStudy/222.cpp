#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum {
	lparen, rparen, plus, minus, times, divide, mod, eos, operand
} precedence; // �켱����, �������� ������� ������ ���� Ÿ���� precedence ���� (lparen = 0, rparen = 1, ... , operand = 8)

int stack[MAX_STACK_SIZE]; // ���Ŀ� ���� ����
char expr[MAX_EXPR_SIZE]; // ������ �����ϴ� ���ڹ迭

//isp�� icp �迭(�ε���: ������)
//lparen, rparen, plus, minus, times, divide, mod, eos�� �켱���� ��
int isp[] = { 0,19,12,12,13,13,13,0 };
int icp[] = { 20,19,12,12,13,13,13,0 };

//�Լ� ����
void postfix(); // ���� ǥ�⸦ ���� ǥ��� ��ȯ�ϴ� �Լ�
precedence get_token(char * symbol, int * n); // �Է� ��Ʈ�����κ��� ��ū�� �������� �Լ�
int eval();
void print_token(precedence token, char ** str);
void stack_push(int * top, int item);
int stack_pop(int * top);

//main �Լ�
int main() {
	printf("-------------����ǥ���� ����-------------\n");
	printf("������ �Է��ϼ���: ");
	scanf_s("%s", expr, sizeof(expr)); // ����ǥ��� �Է¹���

	postfix(); 

	printf("\n����ǥ��� ��� ���: %d \n\n", eval()); 

	return 0;
}

void postfix() {
	char symbol; 
	char expr_post[MAX_EXPR_SIZE] = { 0, }; // ���� ǥ������� �����ϴ� ���ڿ�
	char * str = expr_post; // ������ �о����� �����ϱ� ���� ������
	precedence token;
	int n = 0; 
	int top = 0;

	stack[0] = eos; // ������ ���� ó���� eos

	for (token = get_token(&symbol, &n); token != eos; token = get_token(&symbol, &n)) { // ��ū�� eos, �� ������ ���϶� ���� �ݺ�
		if (token == operand) {	 
			*str++ = symbol;
		}
		else if (token == rparen) { 	  
			while (stack[top] != lparen) { // ���� ��ȣ�� ���� ������ ��ū���� �����ؼ� ���
				print_token(stack_pop(&top), &str);
			}
			stack_pop(&top);	// ���� ��ȣ�� ������
		}
		else { // ������ �켱���� �˻� 
			while (isp[stack[top]] >= icp[token]) { // symbol�� isp�� token�� icp���� ũ�ų� ������ symbol�� �����ϰ� ���
				print_token(stack_pop(&top), &str); 
			}
			stack_push(&top, token);		
		}
	}
	while ((token = stack_pop(&top)) != eos && top > -1) // ������ ���� ���� ������� ���ڿ��� ����.
		print_token(token, &str);

	// ���� ǥ�� ���
	printf("���� ǥ��: %s \n", expr_post);
	strcpy_s(expr, sizeof(expr_post), expr_post); // ���������� ����
}

precedence get_token(char * symbol, int * n) {
	switch (*symbol = expr[(*n)++]) {
	case '(':
		return lparen;
	case ')':
		return rparen;
	case '+':
		return plus;
	case '-':
		return minus;
	case '/':
		return divide;
	case '*':
		return times;
	case '%':
		return mod;
	case '\0':
		return eos;
	default:
		return operand;
	}
}

int eval() {
	precedence token;	
	char symbol;	
	int op1, op2;	
	int n = 0;		
	int top = -1;	

	token = get_token(&symbol, &n);
	while (token != eos) {
		if (token == operand)
			stack_push(&top, symbol - '0'); // ���ڸ� ���ڷ� ��ȯ
		else { 
			op2 = stack_pop(&top);  
			op1 = stack_pop(&top);  

			switch (token) { // �ش翬���ڿ� �°� �����Ͽ� �� ������� ���ÿ� ����
			case plus:
				stack_push(&top, op1 + op2);
				break;
			case minus:
				stack_push(&top, op1 - op2);
				break;
			case times:
				stack_push(&top, op1 * op2);
				break;
			case divide:
				stack_push(&top, op1 / op2);
				break;
			case mod:
				stack_push(&top, op1 % op2);
				break;
			default:
				break;
			}
		}
		token = get_token(&symbol, &n); // ���� �� �ش� ������ ��ū���� �޾ƿ�
	}
	
	return stack_pop(&top);
}

void print_token(precedence token, char ** str) {
	switch (token) {
	case plus:
		*(*str)++ = '+';
		return; // +
	case minus:
		*(*str)++ = '-';
		return; // -
	case divide:
		*(*str)++ = '/';
		return; // /
	case times:
		*(*str)++ = '*';
		return;  // *
	case mod:
		*(*str)++ = '%';
		return;  // %
	case eos:
		return;
	default:
		return;
	}
}

void stack_push(int * top, int item) {
	if ((*top) == MAX_STACK_SIZE) {
		printf("������ ���� á���ϴ�. ��Ҹ� �߰��� �� �����ϴ�.\n");
		exit(1);
	}
	stack[++(*top)] = item;
}

int stack_pop(int * top) {
	if ((*top) == -1) {
		printf("������ ������ϴ�. ��Ҹ� ������ �� �����ϴ�.\n");
		exit(1);
	}
	return stack[(*top)--];
}
