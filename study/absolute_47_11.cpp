#include <iostream>
using namespace std;
int main()
{
	int sec_input, hour, min, sec_output;//입력 받을 초, 출력할 시간, 분, 초 선언
	cin >> sec_input;
	if (sec_input > 3600)
	{
		hour = sec_input/3600;//시간 구하기 
		sec_input %= 3600;
	}
	if (sec_input > 60)
	{
		min = sec_input/60;//분 구하기 
		sec_input %= 60;
	}
	sec_output = sec_input;//초 구하기
	cout << hour << "시간 " << min << "분 " << sec_output << "초"; 
	return 0;
}
