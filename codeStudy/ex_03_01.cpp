#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	//double f1, f2;

	//cout << "Enter two real numbers: ";
	//cin >> f1 >> f2;
	//
	//cout << "square root: " << sqrt(f1) << endl;
	//cout << "power: " << pow(f1, f2) << endl;
	//cout << "absolute: " << fabs(f1) << endl;//abs ���� ����, fabs �Ǽ� ���밪
	//cout << "round up: " << ceil(f1) << endl;//�ø��Լ�
	//cout << "round down: " << floor(f1) << endl;//�����Լ�

	int n1; long n2;

	cout << "Enter two integer numbers: ";
	cin >> n1 >> n2;
	
	cout << "absolute: " << abs(n1) << endl;//abs ���� ����, fabs �Ǽ� ���밪
	exit(1);//�����Լ�
	cout << "absolute: " << labs(n2) << endl;

	return 0;
}