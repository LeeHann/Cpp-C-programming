#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t; cin >> t;
	while(t--)
	{ // 정점이 원 안에 있는지
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		
		int n; cin >> n;
		int cnt = 0;
		while(n--)
		{
			int cx, cy, r;
			cin >> cx >> cy >> r;

			// 출발점이 원 안에 있는지 확인
			int dx1 = (cx-x1) * (cx-x1);
			int dy1 = (cy-y1) * (cy-y1);

			int dx2 = (cx-x2) * (cx-x2);
			int dy2 = (cy-y2) * (cy-y2);
 
			if((dx1 + dy1) <= r*r)
			{
				cnt++;
				if((dx2 + dy2) <= r*r)
				{
					cnt--;
				}
			}
			else if((dx2 + dy2) <= r*r)
			{
				cnt++;
			}
		}
		cout << cnt << "\n";
	}

	return 0;
}