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
	for (int i=0; i<t; i++){//테스트케이스 
		int n, cnt=1; scanf("%d", &n);
		
		for (int j=0; j<n; j++)//사람 입력 
			scanf("%d %d", &num[j].score, &num[j].itv);
		sort(num, num+n, comp);
		int min = num[0].itv;
		for (int j=1; j<n; j++){//선발인원 고르기 	 
  			if (num[j].itv < min){
  					min = num[j].itv;
  					cnt++;
			  }
  		}
		printf("%d\n", cnt);
	}
	return 0;
}
