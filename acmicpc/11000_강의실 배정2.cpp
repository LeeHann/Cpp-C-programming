#include <bits/stdc++.h>
using namespace std;
typedef struct Num{
	int first;
	int second;
};

bool cmp(const Num& n1, Num& n2){
	if(n1.second == n2.second)
		return n1.first < n2.first;//끝나는 시간이 같으면 먼저 시작하는 순 
	else
		return n1.second < n2.second;//먼저 끝나는 순 
}
int main(){
	int n;
	priority_queue<int, vector<int>, greater<int> > pq;
	Num num;
	scanf(" %d",&n);
	vector<Num> v(n);
	for(int i=0 ; i<n ; i++){
		scanf(" %d %d",&num.first, &num.second);
		v[i].first = num.first;
		v[i].second = num.second;
	}
	sort(v.begin(),v.end(),cmp);
	pq.push(v[0].second);
	for(int i=1 ; i<n ; i++){
		if(pq.top()>v[i].first){
			pq.push(v[i].second);
		}
		else{
			pq.pop();
			pq.push(v[i].second);
			}	
		}
	printf("%d\n",pq.size());
	return 0;
}
