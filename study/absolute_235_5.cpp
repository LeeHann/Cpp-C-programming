#include <iostream>
#include <string.h>
using namespace std;
char num[20], num1[20], num2[20];
int main()
{
	int max=0;
	char ans;
	do{
		cin >> num1 >> num2;
		if (strlen(num1) >= strlen(num2)) max = strlen(num1);
		else max = strlen(num2);
		for (int i=0; i<max; i++)
		{
			num[i] = num1[i] + num2[i];
			
			if (num[i] >= 10 ) num[i+1]++;
		}
		printf("%s", num);
		if (strlen(num) > 20) cout << "Integer overflow" << endl;
		cin >> ans;
	} while (ans == 'Y' || ans == 'y');
	return 0;
}
