#include <iostream>
using namespace std;

void get_data(int &val1, int &val2, double &val3);

//defalut operator
double sum(int num1, int num2=0, double num3=0);

int main()
{
	int first, second;
	double third;

	get_data(first, second, third);

	//function overloading
	cout << "The sum of one number = " << sum(first) << endl;
	cout << "The sum of two numbers = " << sum(first, second) << endl;
	cout << "The sum of three numbers = " << sum(first, second, third) << endl;
	
	return 0;
}
void get_data(int &val1, int &val2, double &val3)
{
	cout << "Enter three numbers: ";
	cin >> val1 >> val2 >> val3;
}
double sum(int num1, int num2, double num3)
{
	return (num1+num2+num3);
}