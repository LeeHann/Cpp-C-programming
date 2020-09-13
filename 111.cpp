#include<stdio.h>

#define MAX_STACK_SIZE 100 
#define MAX_EXR_SIZE 100

typedef enum { lparen, rparen, plus, minus, times, divide, mod, eos, operand } precedence;
static int isp[] = { 0,19,12,12,13,13,13,0 };
static int icp[] = { 20,19,12,12,13,13,13,0 };

precedence postfix_stack[MAX_STACK_SIZE];
int stack[MAX_STACK_SIZE];

char expr[MAX_EXR_SIZE] = "6+7*2-(5+4)-9/3+(8-1)#"; //중위 연산자. 
/*함수 선언부*/ 
void eval_push(int *top, int item); //eval push 

int eval_pop(int *top); // eval pop 

void postfix_push(int *top, precedence item); // postfix

precedence postfix_pop(int *top); //postfix

precedence getToken(char *symbol, int *num); //연산자 얻기 

void printToken(precedence token, int *a); //연산자 표기 

int eval(void); //  후위 연산자 계산 

void postfix(void); // 중위-후위 표기변경 
/*메인*/ 
int main(void)
{
   int result;
   printf("중위 연산자: %s \n",expr);
    printf("후위 연산자: ");
    postfix();
    result=eval();
    printf("후위연산식 답: %d", result);
    printf("\n");

}

/*함수 정의부*/ 
void eval_push(int *top, int item)
{
    if (*top >= MAX_STACK_SIZE - 1) 
      printf("\nStack is Full, cannot add element");
    stack[++*top] = item;
}

int eval_pop(int *top)
{
    return stack[(*top)--];
}

void postfix_push(int *top, precedence item)
{
    if (*top >= MAX_STACK_SIZE - 1) {
        return;
    }
    postfix_stack[++*top] = item;
}

precedence postfix_pop(int *top)
{
    return postfix_stack[(*top)--];
}

precedence getToken(char *symbol, int *num)
{

    *symbol = expr[(*num)++];
    switch (*symbol)
    {
    case '(': return lparen;
    case ')': return rparen;
    case '+': return plus;
    case '-': return minus;
    case '*': return times;
    case '/': return divide;
    case '%': return mod;
    case '#': return eos;
    default:  return operand; 
    }
}

void printToken(precedence token, int *a)
{
    switch (token)
    {
    case plus: printf("+"); 
      expr[(*a)++] = '+';
        break;
    case minus: printf("-");
      expr[(*a)++] = '-';
       break;
    case times: printf("*");
      expr[(*a)++] = '*';
        break;
    case divide: printf("/");
      expr[(*a)++] = '/';
        break;
    case mod: printf("%"); 
      expr[(*a)++] = '%';
    
    }
}

int eval(void)
{

    precedence token;
    char symbol;
    int op1, op2;
    int n = 0; 
    int top = -1;

    token = getToken(&symbol, &n);
    while (token != eos)
    {
        if (token == operand)
            eval_push(&top, symbol - '0');
        else
        {
            op2 = eval_pop(&top);
            op1 = eval_pop(&top);
            switch (token)
            {
            case plus: eval_push(&top, op1 + op2);
                break;
            case minus: eval_push(&top, op1 - op2);
                break;
            case times: eval_push(&top, op1*op2);
                break;
            case divide: eval_push(&top, op1 / op2);
                break;
            case mod: eval_push(&top, op1%op2);
            }
        }
        token = getToken(&symbol, &n);
    }
    return eval_pop(&top); 
}

void postfix(void)
{

    char symbol;
    precedence token;
    int n = 0, i = 0;
    int top = 0;

    pstack[0] = eos;
    for (token = getToken(&symbol, &n); token != eos; token = getToken(&symbol, &n))
    {
        if (token == operand)
        {
            printf("%c", symbol);
            expr[i++] = symbol;
        }
        else if (token == rparen) {
            while (postfix_stack[top] != lparen)
                printToken(ppop(&top), &i);
            ppop(&top); 
        }
        else {
            while (isp[pstack[top]] >= icp[token])
                printToken(ppop(&top), &i);
                ppush(&top, token);
        }
    }
    while ((token = ppop(&top)) != eos)
        printToken(token, &i);
    expr[i] = '#';
    printf("\n");
}













