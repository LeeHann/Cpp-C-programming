#include <iostream>
using namespace std;
void calcul(int num1, int num2, int &num3, int &num4) // num1 : b, num2 : l num3 : v num4 : p
{
	num3 = num1*num2;
	num4 = 2*(num1+num2);
}
int main()
{
	int b, l, v, p; //b:�� l:���� v:����,���� p:�ѷ�
	char ans;
	do{
		cout << "Press two numbers ";
		scanf("%d%d", &b, &l);
		calcul(b, l, v, p); // ���
		cout << v << " " << p;
		cout << endl << "Want to countinue?";
		scanf("%s", &ans); 
	} while (ans == 'Y' || ans == 'y');
	return 0;
}
