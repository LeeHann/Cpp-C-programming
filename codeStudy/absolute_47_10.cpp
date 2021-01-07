#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int distance, acceleration=32, time;//거리, 가속도(초당 32feet), 시간 선언
	cin >> time;
	distance = 0.5 * acceleration * pow(time, 2); 
	cout << distance;
	return 0;
}
