#include <iostream>
#include <cmath>
using namespace std;
int average(int m1, int m2, int m3, int m4);
int std_dvt(int m, int avg);
int main()
{
	int avg, m1, m2, m3, m4; // avg : ������ ���, m : ����
	char ans;

	do{
	cin >> m1 >> m2 >> m3 >> m4;
	cout << "4�� ������ ��� : " << average(m1, m2, m3, m4) << endl;
	avg = average(m1, m2, m3, m4); 
	cout << "4�� ������ǥ������: " << std_dvt(m1, avg) << " " << std_dvt(m2, avg) << " " << std_dvt(m3, avg) << " " << std_dvt(m4, avg) << endl; 
	cout << "����Ͻðڽ��ϱ�?(Y/N) ";
	cin >> ans; 	
	}while(ans == 'y' || ans == 'Y');
	
	return 0;
}
int average(int m1, int m2, int m3, int m4) // ��� ��� 
{
	return (m1+m2+m3+m4)/4;
}
int std_dvt(int m, int avg) // ǥ������ ��� 
{
	return pow(m-avg, 2); 
}
