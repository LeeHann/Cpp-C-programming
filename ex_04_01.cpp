#include <iostream>
using namespace std;
int main()
{
	int var1 = 10, var2 = 20;
	int &ref1 = var1; // & : ref1이 var1의 또다른 이름, 참조변수 선언
	
	ref1 = 50; // ref 변수가 포인터와 비슷, var1까지 바꿈
	cout << var1 << endl;
	cout << ref1 << endl;


	//int &ref2; //오류, 대상이 없음
	//	  &ref1 = var2; //오류 별명을 다른 변수에 또 붙일 수 없음, 대상을 바꿀 수 없음
	//int &ref2 = var1+var2; //오류 수식에 별명을 붙일 수 없음
	//int &ref2 = 3;//오류 상수값에 별명을 붙일 수 없음

	//포인터 변수
	int *p;
	p = &var1;
	cout << *p << endl;
	p = &var2;
	cout << *p << endl;

	return 0;
}