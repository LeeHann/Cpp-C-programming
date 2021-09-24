#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 1. 각 수의 홀수의 개수를 센다(첫 시작에서 시작 숫자가 홀수면 현재 홀수의 개수 = 1)
// 2. 수가 한 자리면 종료
// 3. 수가 두자리면 각 자리를 나누고(홀수의 수 세기) 서로 합해서 1부터 다시 시작
// 4. 수가 세자리 이상이면 임의의 위치에서 3개의 수로 끊고(홀수의 수 세기) 각 수를 전부 합쳐서 1부터 다시시작

int _max, _min;

char* InsertNum(int tmp)	// 배열에 넣기
{
	int i=0, temp, len;
	char* str;
	str = (char*)malloc(sizeof(char) * 11);
	while (tmp > 0)
	{
		str[i] = tmp%10 + '0';
		tmp/=10;
		i++;
	}
	str[i] = '\0';
	len = strlen(str);
	for (i=0; i<len/2; i++)		// reverse
	{
		temp = str[i];
		str[i] = str[len - i - 1];
		str[len-i - 1] = temp;
	}
	return str;
}

int ToInt(int start, int end, char* num)	// string 값을 int형으로 변환
{
	int ret, tmp, i;
	ret = 0; tmp = 1; i = 0;
	while(end - ++i >= start)
	{
		ret += (num[end - i]-'0') * tmp;
		tmp *= 10;
	}
	return (ret);
}

int CntOdd(int sum)
{
	int cnt = 0, i;
	char *num;
	num = InsertNum(sum);
	for (i=0; i<strlen(num); i++)
	{
		if ((num[i]-'0')%2==1) cnt++;
	}
	free(num);
	return (cnt);
}

void f(int n, int cnt)
{
	int i, j, n1, n2, n3, len;
	char *num;
	num = InsertNum(n);				// num으로 만들기, 배열에 넣기
	len = strlen(num);
	if (len >= 3)
	{
		cnt += CntOdd(n);
		for (i=1; i<strlen(num)-1; i++)
		{
			for(j=i+1; j<strlen(num); j++)
			{	
				n1 = ToInt(0, i, num);
				n2 = ToInt(i, j, num);
				n3 = ToInt(j, strlen(num), num);
				f(n1+n2+n3, cnt);
			}
		}
	}
	else if (len == 2)
	{
		cnt += CntOdd(n);
		n = (num[0] - '0') + (num[1] - '0');
		f(n, cnt); 
	}
	else if (len == 1)
	{
		if (n%2 == 1) cnt++;
		if (cnt > _max) _max = cnt;
		if (cnt < _min) _min = cnt;
		return;
	}	
	free(num);
}

int main()
{
	int n;
	scanf("%d", &n);
	_max = -1; _min = n;
	f(n, 0);
	printf("%d %d\n", _min, _max);
	return 0;
}