#include <iostream> 
using namespace std;
int main()
{
	int a, b, c, plus; scanf("%d %d %d", &a, &b, &c);
	if (c-b <= 0) plus = -1;
	else plus = a / (c - b) + 1;
	printf("%d", plus);
	return 0;
}
