#include <iostream>
using namespace std;

void print_defference(int max, int data);
//int find_max(int ar[], int size);
int find_max(int *ar, int size);

int main()
{
	int i, max, sc[5];
	cout << "Enter 5 numbers: ";
	for (i=0; i<5; i++)
		cin >> sc[i];
	
	//���ڷμ� ��ü�迭
	max = find_max(sc, 5);

	cout << "Max = " << max << endl;
	cout << "Defferences" << endl;
	//���ڷμ� �� �迭 ���
	for (i=0; i<5; i++)
		print_defference(max, sc[i]);

	return 0;
}
void print_defference(int max, int data)
{
	cout << (max-data) << endl;
}
//int find_max(int ar[], int size)
int find_max(int *ar, int size)//�迭���� �����ͷ� �޾Ƽ� ���� �ȴ�
{
	int max;
	max = ar[0];
	for (int i=0; i<size; i++)
		if (ar[i] > max) max=ar[i];
	return max;
}