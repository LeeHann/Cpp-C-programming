#include <iostream>
#include <cmath>
using namespace std;

/*int roundoff(double dv); */// int roundoff(double);
void roundoff(double dv); 

int main()
{
//---������ �ݿø� ���
	//double dv;
	//cout << "Enter a number: ";
	//cin >> dv;
	//cout << "Round off number: ";
	//cout << static_cast<int>(floor(dv+0.5)) << endl;

////---������ �ݺ� �ݿø� ���
//	double dv;
//	char ans;
//
//	do{
//		cout << "Enter a number: ";
//		cin >> dv;
//		cout << "Round off number: ";
//		cout << static_cast<int>(floor(dv+0.5)) << endl;
//		cout << "Again? (y/n): ";
//		cin >> ans;
//	}while (ans == 'y' || ans == 'Y');
	//---������ �ݺ� �ݿø� �Լ�
	double dv;
	char ans;

	do{
		cout << "Enter a number: ";
		cin >> dv;
		cout << "Round off number: ";
		roundoff(dv); //void�� �Լ�
		/*cout << roundoff(dv) << endl;*/ //������ �Լ�
		cout << "Again? (y/n): ";
		cin >> ans;
	}while (ans == 'y' || ans == 'Y');

	return 0;
}

//int roundoff(double dv)
//{
//	//double dv; //����
//	int temp;
//   	temp = static_cast<int>(floor((dv+0.5)));
//	return temp;//return static_cast<int>(floor((dv+0.5)));
//}
void roundoff(double dv)
{
	cout << static_cast<int>(floor((dv+0.5))) << endl;
}