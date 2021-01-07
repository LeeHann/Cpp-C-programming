#include <bits/stdc++.h>
using namespace std;

int ck_alp(char *str)
{
	int flag;
	int alp[26] = {0, };

	flag = 0;
	while (*str)
	{
		if (alp[*str - 'a'])
			return (0);
		else
		{
			if (*str != *(str + 1))
				flag = 1;
			if (flag && !alp[*str - 'a'])
			{
				alp[*str - 'a'] = 1;
				flag = 0;
			}
		}
		str++;
	}
	return (1);
}

int main(void){
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	char str[101];
	int cnt;

	cin >> n;
	cnt = 0;
	while (n--)
	{
		str[0] = '\0';
		cin >> str;
		cnt += ck_alp(str);
	}
	cout << cnt << "\n";
	return (0);
}