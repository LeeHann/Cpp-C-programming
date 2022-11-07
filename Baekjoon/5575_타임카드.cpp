#include <bits/stdc++.h>
using namespace std;
int num[4][7];
int main()
{
	for(int i=1; i<=3; i++)
	{	
		int sum1=0, sum2=0, sum=0;
		for(int j=1; j<=3; j++) cin>>num[i][j];
		sum1=num[i][1]*3600+num[i][2]*60+num[i][3];
		for(int j=4; j<=6; j++) cin>>num[i][j];
		sum2=num[i][4]*3600+num[i][5]*60+num[i][6];
		sum=sum2-sum1;
			num[i][1]=sum/3600;
			sum%=3600;
			num[i][2]=sum/60;
			sum%=60;
			num[i][3]=sum;
		cout<<num[i][1]<<" "<<num[i][2]<<" "<<num[i][3]<<endl;
	}
	return 0;
} 
