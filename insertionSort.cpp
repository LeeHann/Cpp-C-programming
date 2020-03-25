#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int list[20];

void insertionSort(int list[], int n);

int main(){
	//rand�Լ��� �ʱ�ȭ�ϴ� srand�Լ��� seed�� time �ֱ� 
	srand((unsigned int)time(NULL));
	
	int n; 
	printf("n�� �Է��ϼ��� : "); scanf("%d", &n);
	printf("���� �� list �迭 �� : \n");
	for(int i=0; i<n; i++){
		list[i] = rand()%10000;
		printf("%d ", list[i]);	
	}
	
	printf("\n\n");
	insertionSort(list, n);
	
	printf("���� �� list �迭 �� : \n");
	for(int i=0; i<n; i++){
		printf("%d ", list[i]);
	}
	
	return 0;
}

void insertionSort(int list[], int n){
	for(int i=1; i<n; i++){
		int num = list[i];
		for(int j=i-1; j>=0; j--){
			if(list[j] > num){
				list[j+1] = list[j];
				if(j==0) list[j] = num;
			}
			else{
				list[j+1] = num;
				break;
			}
		}
	}
}
