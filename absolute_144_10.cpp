#include <iostream>
using namespace std;
void child_height(char sex, int h1, int h2);
int main()
{
	char sex, ans;
	int mother_height, father_height;
	
	do{
		cout << "���� ��Ӵ�Ű �ƹ���Ű" << endl;
		cin >> sex >> mother_height >> father_height;
		cout << "������ Ű" << endl; 
		child_height(sex, mother_height, father_height);
		cout << "����Ͻðڽ��ϱ�>(Y/N) ";
		cin >> ans; 
	}while(ans == 'y' || ans == 'Y');
	return 0;
}
void child_height(char sex, int h1, int h2)
{
	if (sex == 'F') // ������ ��� 
	{
		cout << (double)((h2*12/13)+h1)/2 << endl;
	}
	else if (sex == 'M') // ������ ���
	{
		cout <<(double)((h1*13/12)+h2)/2 << endl;
	}
}
