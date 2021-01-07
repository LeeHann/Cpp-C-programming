#include <iostream>
using namespace std;
void get_data(double &num1)
{
	cout << "The weight? (pound) ";
	cin >> num1;
}
void trans_data(double &num1, double &num2, double &num3, double &num4)
{
	num2 = num1 * 16;
	num3 = num2 * 0.02835;
	num4 = num3 * 1000;
} 
void print_data(double &num1, double &num2, double &num3)
{
	printf("%lf %lf %lf\n", num1, num2, num3);
}
int main()
{
	double Pound, Ounce, kilo, gram;
	char ans;
	do{
		//입력	
		get_data(Pound);
		//변환
		trans_data(Pound, Ounce, kilo, gram);
		//출력
		print_data(Ounce, kilo, gram);
		cout << "Want to continue? ";
		cin >> ans;
	} while (ans == 'Y' || ans == 'y');
	return 0;
}
