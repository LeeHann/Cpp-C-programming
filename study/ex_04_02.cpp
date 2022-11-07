#include <iostream>
using namespace std;

void print_data(int num1, int num2);

int main()
{
	int first, second;
	
	cout << "Enter two numbers: ";
	cin >> first >> second;

	cout << "Before swap: " << first << " " << second << endl;

	int temp;
	temp = first;
	first = second;
	second = temp;

	//cout << "After swap: " << first << " " << second << endl;
	print_data(first, second);

	return 0;
}

void print_data(int num1, int num2)
{
	cout << "After swap: " << num1 << " " << num2 << endl;
}