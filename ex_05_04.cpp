#include <iostream>
using namespace std;

void print_defference(int fmax, int data);
void find_max(int ar[][4], int fmax[], int row);
//void find_max(int ar[][4], int fmax[], int row, int col);

int main()
{
	int sc[2][4]={{5, 6, 8, 7},{1, 2, 3, 4}};
	int max[2];
	
	//인자로서 전체 배열
	//find_max(sc, max, 2, 4);
	find_max(sc, max, 2);
	cout << "Max0 = " << max[0] << endl;
	cout << "Max1 = " << max[1] << endl;

	for (int i=0; i<2; i++)
		for (int j=0; j<4; j++)
		{
			print_defference(max[i], sc[i][j]);
		}
	return 0;
}
void find_max(int ar[][4], int fmax[], int row)
//void find_max(int ar[][4], int fmax[], int row, int col)//두번째 배열 범위는 꼭 써야함
{
	for (int i=0; i<row; i++)
	{
		fmax[i] = ar[i][0];
		for (int j=0; j<4; j++)
		{
			if (ar[i][j]>fmax[i]) fmax[i] = ar[i][j];
		}
	}
}
void print_defference(int fmax, int data)
{
	cout << (fmax - data) << endl;
}