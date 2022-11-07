#include <iostream>
using namespace std;

class m0ney{
private:
	int dollar;
	int cent;
	double money;
public:
	void set();//mutator
	int getDollar();//accessor
	int getCent();  
	double reTurnD();
	void input();
	void output();
};

int main()
{
	m0ney M1;
	//입력 
	M1.input();
	
	//변환
	M1.set();
	 
	//출력
	M1.output();
	
	return 0;
}
int m0ney::getCent()
{
	return cent;
}
int m0ney::getDollar()
{
	return dollar;	
}
double m0ney::reTurnD()
{
	return money;
}
void m0ney::set()
{
	money = dollar + (double)cent/100; 
}
void m0ney::input()
{
	cout << "Enter the dollar and cent! = ";
	cin >> dollar >> cent; cout << endl;
}
void m0ney::output()
{
	cout << "How much? = " << reTurnD();
}
