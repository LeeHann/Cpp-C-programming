#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int list[20];

void insertionSort(int list[], int n);

int main(){
	//rand함수를 초기화하는 srand함수의 seed로 time 넣기 
	srand((unsigned int)time(NULL));
	
	int n; 
	printf("n을 입력하세요 : "); scanf("%d", &n);
	printf("정렬 전 list 배열 값 : \n");
	for(int i=0; i<n; i++){
		list[i] = rand()%10000;
		printf("%d ", list[i]);	
	}
	
	printf("\n\n");
	insertionSort(list, n);
	
	printf("정렬 후 list 배열 값 : \n");
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
