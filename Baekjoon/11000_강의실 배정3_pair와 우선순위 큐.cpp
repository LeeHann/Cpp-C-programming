#include <bits/stdc++.h>
using namespace std;
typedef pair <int, int> pr; 
int main(){
	int n;
	priority_queue<int, vector<int>, greater<int> > pq;
	scanf(" %d",&n);
	pr *v = new pr[n+1];
	for(int i=0 ; i<n ; i++){
		scanf(" %d %d",&v[i].first, &v[i].second);
	}
	sort(v, v+n+1);
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
