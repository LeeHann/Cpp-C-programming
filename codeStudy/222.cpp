#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum {
	lparen, rparen, plus, minus, times, divide, mod, eos, operand
} precedence; // 우선순위, 연상으로 연산들을 열거한 열거 타입의 precedence 정의 (lparen = 0, rparen = 1, ... , operand = 8)

int stack[MAX_STACK_SIZE]; // 수식에 대한 스택
char expr[MAX_EXPR_SIZE]; // 수식을 저장하는 문자배열

//isp와 icp 배열(인덱스: 연산자)
//lparen, rparen, plus, minus, times, divide, mod, eos의 우선순위 값
int isp[] = { 0,19,12,12,13,13,13,0 };
int icp[] = { 20,19,12,12,13,13,13,0 };

//함수 선언
void postfix(); // 중위 표기를 후위 표기로 변환하는 함수
precedence get_token(char * symbol, int * n); // 입력 스트링으로부터 토큰을 가져오는 함수
int eval();
void print_token(precedence token, char ** str);
void stack_push(int * top, int item);
int stack_pop(int * top);

//main 함수
int main() {
	printf("-------------중위표기의 연산-------------\n");
	printf("수식을 입력하세요: ");
	scanf_s("%s", expr, sizeof(expr)); // 중위표기로 입력받음

	postfix(); 

	printf("\n후위표기식 계산 결과: %d \n\n", eval()); 

	return 0;
}

void postfix() {
	char symbol; 
	char expr_post[MAX_EXPR_SIZE] = { 0, }; // 후위 표기식으로 저장하는 문자열
	char * str = expr_post; // 어디까지 읽었는지 저장하기 위한 포인터
	precedence token;
	int n = 0; 
	int top = 0;

	stack[0] = eos; // 스택의 제일 처음은 eos

	for (token = get_token(&symbol, &n); token != eos; token = get_token(&symbol, &n)) { // 토큰이 eos, 즉 문자의 끝일때 까지 반복
		if (token == operand) {	 
			*str++ = symbol;
		}
		else if (token == rparen) { 	  
			while (stack[top] != lparen) { // 왼쪽 괄호가 나올 때까지 토큰들을 제거해서 출력
				print_token(stack_pop(&top), &str);
			}
			stack_pop(&top);	// 왼쪽 괄호를 버린다
		}
		else { // 연산자 우선순위 검사 
			while (isp[stack[top]] >= icp[token]) { // symbol의 isp가 token의 icp보다 크거나 같으면 symbol을 제거하고 출력
				print_token(stack_pop(&top), &str); 
			}
			stack_push(&top, token);		
		}
	}
	while ((token = stack_pop(&top)) != eos && top > -1) // 나머지 스택 내의 내용들을 문자열에 저장.
		print_token(token, &str);

	// 후위 표현 출력
	printf("후위 표현: %s \n", expr_post);
	strcpy_s(expr, sizeof(expr_post), expr_post); // 전역변수에 저장
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
			stack_push(&top, symbol - '0'); // 문자를 숫자로 변환
		else { 
			op2 = stack_pop(&top);  
			op1 = stack_pop(&top);  

			switch (token) { // 해당연산자에 맞게 연산하여 그 결과값을 스택에 저장
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
		token = get_token(&symbol, &n); // 연산 후 해당 문자의 토큰값을 받아옴
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
		printf("스택이 가득 찼습니다. 요소를 추가할 수 없습니다.\n");
		exit(1);
	}
	stack[++(*top)] = item;
}

int stack_pop(int * top) {
	if ((*top) == -1) {
		printf("스택이 비었습니다. 요소를 삭제할 수 없습니다.\n");
		exit(1);
	}
	return stack[(*top)--];
}
