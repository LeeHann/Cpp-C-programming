#include <bits/stdc++.h>
using namespace std;
struct ssn{
	int score; int itv;
};
ssn num[100001];
bool comp(const ssn&a, const ssn&b){
	return a.score < b.score;
}

int main(){
	int t; scanf("%d", &t);
	for (int i=0; i<t; i++){//�׽�Ʈ���̽� 
		int n, cnt=1; scanf("%d", &n);
		
		for (int j=0; j<n; j++)//��� �Է� 
			scanf("%d %d", &num[j].score, &num[j].itv);
		sort(num, num+n, comp);
		int min = num[0].itv;
		for (int j=1; j<n; j++){//�����ο� ���� 	 
  			if (num[j].itv < min){
  					min = num[j].itv;
  					cnt++;
			  }
  		}
		printf("%d\n", cnt);
	}
	return 0;
}
