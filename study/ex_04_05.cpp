#include <iostream>
using namespace std;

void get_data(int &val1, int &val2, double &val3);
double avg(int num1, int num2);
double avg(int num1, double num2);
double avg(int num1, int num2, double num3);

int main()
{
	int first, second;
	double third;

	get_data(first, second, third);

	//function overloading
	cout << "The mean of two number = " << avg(first, second) << endl;
	cout << "The mean of two number = " << avg(first, third) << endl;
	cout << "The mean of three number = " << avg(first, second, third) << endl;
	
	return 0;
}


void get_data(int &val1, int &val2, double &val3)
{
	cout << "Enter three numbers: ";
	cin >> val1 >> val2 >> val3;
}
double avg(int num1, int num2)
{
	return (num1+num2)/2.0;
}
double avg(int num1, double num2)
{
	return (num1+num2)/2.0;
}
double avg(int num1, int num2, double num3)
{
	return (num1+num2+num3)/3.0;
}