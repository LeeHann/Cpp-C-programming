#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pr;
bool cmp(pr x, pr y){
	if(x.second == y.second)
		return x.first < y.first;
	return x.second < y.second;
}
int main(){
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n; cin >> n;
	pr *v = new pr[n+1];
	for(int i=0; i<n; i++){
		cin >> v[i].first >> v[i].second;
	}
	sort(v, v+n, cmp);
	
	int cnt=0, ck = 0;
	for(int i=0; i<n; i++){
		if(ck<=v[i].first){
			ck = v[i].second;
			cnt++;
		}		
	}
	cout << cnt << "\n";
	
	
	return 0;
}
