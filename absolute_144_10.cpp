#include <iostream>
using namespace std;
void child_height(char sex, int h1, int h2);
int main()
{
	char sex, ans;
	int mother_height, father_height;
	
	do{
		cout << "성별 어머니키 아버지키" << endl;
		cin >> sex >> mother_height >> father_height;
		cout << "아이의 키" << endl; 
		child_height(sex, mother_height, father_height);
		cout << "계속하시겠습니까>(Y/N) ";
		cin >> ans; 
	}while(ans == 'y' || ans == 'Y');
	return 0;
}
void child_height(char sex, int h1, int h2)
{
	if (sex == 'F') // 여성일 경우 
	{
		cout << (double)((h2*12/13)+h1)/2 << endl;
	}
	else if (sex == 'M') // 남성일 경우
	{
		cout <<(double)((h1*13/12)+h2)/2 << endl;
	}
}
