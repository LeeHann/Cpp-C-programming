#include <iostream>
#define MAX_NUM 5
using namespace std;

class CounterType{
private:
		int cnt;
public:
	int set(int num);//수를 매개변수로 줘서 카운터를 설정	
	int cntup()
	{
		cnt++;
		printf("UP COUNT : %d\n", cnt);
		}
	int cntdwn()
	{
		//cnt는 음수가 되지 않는다
		cnt--;
		if (cnt<0) printf("DOWN COUNT : 0\n");
		else printf("DOWN COUNT : %d", cnt);
		}	
};
int main()
{
	CounterType C1;
	int num;
	//입력
	for (int i=0; i<MAX_NUM; i++)
	{
		cout << "NUMBER? = "; cin >> num;
		printf("COUNT? = %d\n", C1.set(num));
	 } 
	 //cnt의 up, down 출력 
	 C1.cntup();
	 C1.cntdwn();
	 
	return 0;
}
int CounterType::set(int num)
{
	if (num >= 0) cnt++;
	return cnt;
}

