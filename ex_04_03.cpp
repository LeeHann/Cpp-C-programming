#include <iostream>
using namespace std;

void print_data(int num1, int num2);
void swap_data(int &data1, int &data2);

int main()
{
	int first, second;
	
	cout << "Enter two numbers: ";
	cin >> first >> second;

	cout << "Before swap: " << first << " " << second << endl;

	swap_data(first, second);

	//cout << "After swap: " << first << " " << second << endl;
	print_data(first, second);

	return 0;
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