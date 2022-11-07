#include <bits/stdc++.h>
#define MAX_SIZE 10000
using namespace std;

void swap(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
typedef struct priorityQueue{
	int heap[MAX_SIZE];
	int count;
};
void push(priorityQueue *pq, int data) {

    if(pq->count >= MAX_SIZE) return;
    pq->heap[pq->count] = data;//완전 이진트리의 마지막 원소에 데이터를 삽입 
    int now = pq->count;// 삽입된 데이터에 해당되는 노드의 인덱스 
    int parent = (pq->count - 1) / 2;// 삽입된 노드의 부모노드  

    while(now > 0 && pq->heap[now] > pq->heap[parent]) {

        swap(&pq->heap[now],&pq->heap[parent]);// 부모 노드와 삽입된 노드교체 
        now = parent;  // 부모노드에 삽입된 노드가 있으므로 now를 부모노드 값으로 한다 
        parent = (parent - 1) / 2;    
    }
    pq->count++; 
}

int pop(priorityQueue *pq) {
    if(pq-> count <= 0) return -9999;
    int res = pq->heap[0];
    pq->count--;
    pq->heap[0] = pq->heap[pq->count];
    int now = 0, leftChild = 1, rightChild = 2;
    int target = now;

    //원소가 존재할때까지만 반복 
    while(leftChild < pq->count) {
        if(pq->heap[target] < pq->heap[leftChild]) target = leftChild;
        if(pq->heap[target] <  pq->heap[rightChild] && rightChild < pq->count) target = rightChild; 
        if(target== now) break;
        else {
            swap(&pq->heap[now],&pq->heap[target]);
            now = target;
            leftChild = now * 2 + 1;
            rightChild = now * 2 + 2;
        }

    }
    return res;
}

typedef struct Num{
	int first;
	int second;
};

bool cmp(Num n1, Num n2){
	if(n1.second == n2.second)
		return n1.first < n2.first;//끝나는 시간이 같으면 먼저 시작하는 순 
	else
		return n1.second < n2.second;//먼저 끝나는 순 
}

int main(){
	int n, cnt=0;
	priorityQueue pq;
	vector<Num> v;
	scanf(" %d", &n);
	for(int i=0; i<n; i++){
		int s, t;
		scanf(" %d %d", &s, &t);
		v[i].first = s;
		v[i].second = t;
	}
	sort(v.begin(), v.end(), cmp);
	push(pq, v[0].second);
	for(int i=1; i<n; i++){
		if(pq.heap[0] > v[i].first)
			push(pq, v[i].second);
		else{
			pop(pq);
			push(v[i].second);
		}
	}
	printf("%d", pq.size());
	return 0;
}
