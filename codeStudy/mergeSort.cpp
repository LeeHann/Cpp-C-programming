#include <iostream>
#include <cstdlib>
#include <ctime> 

using namespace std;

int list[20];
int tmp[20];

void mergeSort(int list[], int p, int r);
void merge(int list[], int p, int q, int r);

int main(){
	//time을 seed로 가진 srand함수(rand함수 초기화) 
	srand((unsigned int)time(NULL));
	
	int n;
	printf("n을 입력하세요: ");
	scanf("%d", &n);
	printf("정렬 전 list 배열 값 : \n");
	
	for(int i=0; i<n; i++){
		//난수를 0-999 사이로 지정하기 
		list[i] = rand()%1000;
		printf("%d ", list[i]);
	}
	printf("\n\n");
	
	mergeSort(list, 0, n-1);
	
	printf("정렬 후 list 배열 값 : \n");
	for(int i=0; i<n; i++){
		printf("%d ", list[i]);
	}
	return 0;
}

void mergeSort(int list[], int p, int r){
	int q;
	if(p<r){
		q = (p+r)/2;
		mergeSort(list, p, q);
		mergeSort(list, q+1, r);
		merge(list, p, q, r);
	}
}
void merge(int list[], int p, int q, int r){
	int i=p, j=q+1, t=1;
	while(i<=q && j<=r){
		if(list[i]<=list[j]){
			tmp[t++] = list[i++];
		}
		else{
			tmp[t++] = list[j++];
		}
	}
	while(i<=q){
		tmp[t++] = list[i++];
	}
	while(j<=r){
		tmp[t++] = list[j++];
	}
	i=p, t=1;
	while(i<=r){
		list[i++] = tmp[t++];
	}
}
