#include <bits/stdc++.h>
using namespace std;
int player[201][4];
int sum[201];
int main()
{
	int n, tmp; cin>>n;
	for (int i=0; i<n; i++) cin>>player[i][0]>>player[i][1]>>player[i][2];
	for (int i=0; i<3; i++)
	{
		for(int j=0; j<n; j++)
		{
			tmp=player[j][i];
			for(int k=0; k<n; k++)
			{
				if (j==k) continue;
				if(tmp == player[k][i])
				{
					player[j][i]=0;
					player[k][i]=0;
				}
			}
			sum[j]+=player[j][i];
		}
	}
	for(int i=0; i<n; i++) cout<<sum[i]<<endl;
	return 0;
} 
