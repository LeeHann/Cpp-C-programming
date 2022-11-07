#include <iostream>
#include <cmath>
using namespace std;

//double ar(double PI, double radius);
//double vl(double PI, double radius);

void ar(double PI, double radius);
void vl(double PI, double radius);

int main()
{
	double radius, volume, area;
	const double PI=3.14;
	
	cout << "Enter a radius: ";
	cin >> radius;

	////함수를 사용하지 않는 경우
	//area = PI*pow(radius,2);
	//volume = (4.0/3.0)*PI*pow(radius,3);

	//리턴형 함수
	//area = ar(PI, radius);
	//volume = vl(PI,radius);

	//void형 함수
	ar(PI, radius);
	vl(PI,radius);

	/*cout << "The area is " << area << endl;
	cout << "The volume is " << volume << endl; */
	return 0;
}

/*double ar(double PI,double radius)
{	
	return PI*pow(radius,2);
}
double vl(double PI,double radius)
{	
	return (4.0/3.0)*PI*pow(radius,3);
}*/	

void ar(double PI,double radius)
{	
	cout << "The area is " << PI*pow(radius,2) << endl;
}
void vl(double PI,double radius)
{	
	cout << "The volume is " << (4.0/3.0)*PI*pow(radius,3) << endl;
}