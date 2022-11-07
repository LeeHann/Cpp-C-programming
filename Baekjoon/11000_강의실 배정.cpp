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
    pq->heap[pq->count] = data;//���� ����Ʈ���� ������ ���ҿ� �����͸� ���� 
    int now = pq->count;// ���Ե� �����Ϳ� �ش�Ǵ� ����� �ε��� 
    int parent = (pq->count - 1) / 2;// ���Ե� ����� �θ���  

    while(now > 0 && pq->heap[now] > pq->heap[parent]) {

        swap(&pq->heap[now],&pq->heap[parent]);// �θ� ���� ���Ե� ��屳ü 
        now = parent;  // �θ��忡 ���Ե� ��尡 �����Ƿ� now�� �θ��� ������ �Ѵ� 
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

    //���Ұ� �����Ҷ������� �ݺ� 
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
		return n1.first < n2.first;//������ �ð��� ������ ���� �����ϴ� �� 
	else
		return n1.second < n2.second;//���� ������ �� 
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
