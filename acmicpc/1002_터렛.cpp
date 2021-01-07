#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
	cin >> t;

	while(t--)
	{
		long long x1, y1, r1, x2, y2, r2;
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

		long long squareX = (x1-x2)*(x1-x2);
		long long squareY = (y1-y2)*(y1-y2);
		double squareD =  squareX + squareY;
		squareD = sqrt(squareD);
		
		int ans;
		int sub = (r1>r2 ? r1-r2 : r2-r1);
		int add = r1+r2;

		if(sub > squareD || add < squareD || (squareD == 0 && r1!=r2))
		{
			ans = 0;
		}
		else if((sub == squareD && squareD!=0) || add == squareD)
		{
			ans = 1;
		}
		else if(sub < squareD && squareD < add)
		{
			ans = 2;
		}
		else if(squareD == 0 && r1 == r2)
		{
			ans = -1;
		}

		cout << ans << "\n";
	}
	return 0;
}