#include <iostream>
using namespace std;
int main()
{
	int sec_input, hour, min, sec_output;//�Է� ���� ��, ����� �ð�, ��, �� ����
	cin >> sec_input;
	if (sec_input > 3600)
	{
		hour = sec_input/3600;//�ð� ���ϱ� 
		sec_input %= 3600;
	}
	if (sec_input > 60)
	{
		min = sec_input/60;//�� ���ϱ� 
		sec_input %= 60;
	}
	sec_output = sec_input;//�� ���ϱ�
	cout << hour << "�ð� " << min << "�� " << sec_output << "��"; 
	return 0;
}
