#include <iostream>
#include <cmath>
using namespace std;
int average(int m1, int m2, int m3, int m4);
int std_dvt(int m, int avg);
int main()
{
	int avg, m1, m2, m3, m4; // avg : 점수의 평균, m : 점수
	char ans;

	do{
	cin >> m1 >> m2 >> m3 >> m4;
	cout << "4개 점수의 평균 : " << average(m1, m2, m3, m4) << endl;
	avg = average(m1, m2, m3, m4); 
	cout << "4개 점수의표준편차: " << std_dvt(m1, avg) << " " << std_dvt(m2, avg) << " " << std_dvt(m3, avg) << " " << std_dvt(m4, avg) << endl; 
	cout << "계속하시겠습니까?(Y/N) ";
	cin >> ans; 	
	}while(ans == 'y' || ans == 'Y');
	
	return 0;
}
int average(int m1, int m2, int m3, int m4) // 평균 계산 
{
	return (m1+m2+m3+m4)/4;
}
int std_dvt(int m, int avg) // 표준편차 계산 
{
	return pow(m-avg, 2); 
}
