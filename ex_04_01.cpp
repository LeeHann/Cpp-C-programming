#include <iostream>
using namespace std;
int main()
{
	int var1 = 10, var2 = 20;
	int &ref1 = var1; // & : ref1�� var1�� �Ǵٸ� �̸�, �������� ����
	
	ref1 = 50; // ref ������ �����Ϳ� ���, var1���� �ٲ�
	cout << var1 << endl;
	cout << ref1 << endl;


	//int &ref2; //����, ����� ����
	//	  &ref1 = var2; //���� ������ �ٸ� ������ �� ���� �� ����, ����� �ٲ� �� ����
	//int &ref2 = var1+var2; //���� ���Ŀ� ������ ���� �� ����
	//int &ref2 = 3;//���� ������� ������ ���� �� ����

	//������ ����
	int *p;
	p = &var1;
	cout << *p << endl;
	p = &var2;
	cout << *p << endl;

	return 0;
}