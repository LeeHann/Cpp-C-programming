#include <iostream>
#include <cstring>
using namespace std;
char num1[21], num2[21];
char num_1[21], num_2[21];
int ans[21];
int main()
{
	int tmp;
	cin >> num1 >> num2;
	//�Ųٷ� ��������, ����1���� ����, ������ 9���� ũ�� ���� �ڸ����� +1
	int n;
	if(strlen(num1) > strlen(num2)) n=strlen(num1);
	else n=strlen(num2);
	for (int i = n-1; i >= 0; i--)
	{
		num_1[n-i-1] = num1[i];
		num_2[n-i-1] = num2[i];
	}
	cout << num_1 << " " << num_2 << endl;
	for (int i = 0; i < n; i++)
	{
		tmp = (int)num_1[i]-'0' + num_2[i]-'0';
		if (tmp>9)
			num_1[i+1]++;
		ans[i] = tmp;
		printf("%d", ans[i]);
	}
	return 0;
}
