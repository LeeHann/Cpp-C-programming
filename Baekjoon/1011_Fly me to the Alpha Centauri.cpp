#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t; cin >> t;
	while (t--)
	{
		int x, y;
		cin >> x >> y; // x<y

		long long ans;
		long long tmp = y-x;

		if(tmp <= 3)
		{
			ans = tmp;
		}
		else
		{
			// 제곱근
			double s_tmp = sqrt(tmp);
			double as_tmp = s_tmp + 0.5f;
			long long ss_tmp = (long long)as_tmp * (long long)as_tmp;
			if(tmp <= ss_tmp)
			{
				ans = ((long long)as_tmp * 2) - 1;
			}
			else //(tmp > ss_tmp)
			{
				ans = (long long)as_tmp*2;
			}
		}

		cout << ans << "\n";
		
	}

	return 0;
}