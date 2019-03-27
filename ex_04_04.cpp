#include <iostream>
using namespace std;

void get_data(int *val1, int *val2);
void print_data(int num1, int num2);
void swap_data(int &data1, int &data2);

int main()
{
	int first, second;
	
	get_data(&first, &second);
	swap_data(first, second);
	print_data(first, second);

	return 0;
}
void get_data(int *val1, int *val2)
{
	cout << "Enter two numbers: ";
	cin >> *val1 >> *val2;

	cout << "Before swap: " << *val1 << " " << *val2 << endl;
}
void swap_data(int &data1, int &data2) //int &data1=first
{
	int temp;
	temp = data1;
	data1 = data2;
	data2 = temp;
}
void print_data(int num1, int num2)
{
	cout << "After swap: " << num1 << " " << num2 << endl;
}