#include <iostream>
#include <cmath>
using namespace std;

/*int roundoff(double dv); */// int roundoff(double);
void roundoff(double dv); 

int main()
{
//---정수형 반올림 계산
	//double dv;
	//cout << "Enter a number: ";
	//cin >> dv;
	//cout << "Round off number: ";
	//cout << static_cast<int>(floor(dv+0.5)) << endl;

////---정수형 반복 반올림 계산
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
	//---정수형 반복 반올림 함수
	double dv;
	char ans;

	do{
		cout << "Enter a number: ";
		cin >> dv;
		cout << "Round off number: ";
		roundoff(dv); //void형 함수
		/*cout << roundoff(dv) << endl;*/ //리턴형 함수
		cout << "Again? (y/n): ";
		cin >> ans;
	}while (ans == 'y' || ans == 'Y');

	return 0;
}

//int roundoff(double dv)
//{
//	//double dv; //오류
//	int temp;
//   	temp = static_cast<int>(floor((dv+0.5)));
//	return temp;//return static_cast<int>(floor((dv+0.5)));
//}
void roundoff(double dv)
{
	cout << static_cast<int>(floor((dv+0.5))) << endl;
}