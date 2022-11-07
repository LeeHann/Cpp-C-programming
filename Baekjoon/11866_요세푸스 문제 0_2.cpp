#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);
	
	queue<int> q;

	int n, k; cin >> n >> k;
	int cnt = 0;

	for(int i=1; i<=n; i++) q.push(i);

	cout << "<";
	while(!q.empty())
	{
		for(int i=0; i<k-1; i++)
		{
			q.push(q.front());
			q.pop();
		}
		cout << q.front();
		q.pop();
		cnt++;
		if(cnt <= n-1) cout << ", ";
	}
	cout << ">";
	return 0;
}