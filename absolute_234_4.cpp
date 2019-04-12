#include <iostream>
using namespace std;

// 숫자 정렬하기 
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void sort(int list[], int n)
{
	int i, j, min;
	for (i=0; i<n-1; i++)
	{
		min = i;
		for(j=i+1; j<n; j++)
			if(list[j] < list[min]) min = j;
		swap(list[i], list[min]);
	}
}

// 배열 list안에 들어갈 숫자 
int list[50] = {-12,3,-12,4,1,1,-12,1,-1,1,2,3,4,2,3,-12, };
// 숫자가 몇개인지 셀 cnt배열, 무슨숫자가 들어있는지 나타내는 list2배열 
int cnt[50], list2[50];

int main()
{
	int tmp, a=0, n=16, j;
	sort(list, n);
	for (int i=0; list[i]!=0 ; i++)
	{
		tmp = list[i]; 
		list2[a] = tmp;
		j = i; //배열 안의 숫자가 몇개있는지 알기 위해 어디서 시작하는지를 j가 알고있게 한다 
		do{
			cnt[a]++; //있으므로 +1 
			j++; //배열 인덱스가 올라간다 
		}while (tmp == list[j]);
		i=j-1; //이따 +1 할거니까 i에 -1 
		a++;
	}
	cout << "N     Count" << endl;
	for (int i=0; cnt[i]!=0; i++)
		cout << list2[i] << "       " << cnt[i] << endl;
	return 0;
}
