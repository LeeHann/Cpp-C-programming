#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int distance, acceleration=32, time;//�Ÿ�, ���ӵ�(�ʴ� 32feet), �ð� ����
	cin >> time;
	distance = 0.5 * acceleration * pow(time, 2); 
	cout << distance;
	return 0;
}
