#include <bits/stdc++.h>
using namespace std;
struct people{
	int kg;
	int cm;
	int grade=1;
};
struct people num[51]; 
int main()
{
	int n; cin >> n;
	for (int i=1; i<=n; i++)
		cin >> num[i].kg >> num[i].cm;
	for (int i=1; i<=n; i++)
	{
		for (int j=1; j<=n; j++)
		{
			if(num[i].kg < num[j].kg)
				if (num[i].cm < num[j].cm)
					num[i].grade++;
		}
		cout << num[i].grade << " ";
	}
	return 0;
}
