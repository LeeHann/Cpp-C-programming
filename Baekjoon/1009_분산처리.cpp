#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t; cin >> t;
	while(t--)
	{
		int a, b;
		cin >> a >> b;

		if(a == 1)
		{
			cout << 1 << "\n";
			continue;
		}

		int ans =  a%10;
		for(int i=1; i<b; i++)
		{
			ans = ans * a;
			ans %= 10;
		}
		if(ans == 0) cout << 10 << "\n";
		else cout << ans << "\n";
	}

	return 0;
}