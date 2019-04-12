#include <iostream>
using namespace std;

// ���� �����ϱ� 
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

// �迭 list�ȿ� �� ���� 
int list[50] = {-12,3,-12,4,1,1,-12,1,-1,1,2,3,4,2,3,-12, };
// ���ڰ� ����� �� cnt�迭, �������ڰ� ����ִ��� ��Ÿ���� list2�迭 
int cnt[50], list2[50];

int main()
{
	int tmp, a=0, n=16, j;
	sort(list, n);
	for (int i=0; list[i]!=0 ; i++)
	{
		tmp = list[i]; 
		list2[a] = tmp;
		j = i; //�迭 ���� ���ڰ� ��ִ��� �˱� ���� ��� �����ϴ����� j�� �˰��ְ� �Ѵ� 
		do{
			cnt[a]++; //�����Ƿ� +1 
			j++; //�迭 �ε����� �ö󰣴� 
		}while (tmp == list[j]);
		i=j-1; //�̵� +1 �ҰŴϱ� i�� -1 
		a++;
	}
	cout << "N     Count" << endl;
	for (int i=0; cnt[i]!=0; i++)
		cout << list2[i] << "       " << cnt[i] << endl;
	return 0;
}
