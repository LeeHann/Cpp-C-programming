#include <bits/stdc++.h>
using namespace std;

char num[6];

int main(){
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);
	
	while(cin>>num)
	{
		if(!strcmp(num, "0")) break;
		
		int len = strlen(num);
		int i;
		
		for(i=0; i<len; i++)
		{
			if(num[i] != num[len-i-1])
			{
				cout << "no\n";
				break;
			}
		}

		if(i == len) cout << "yes\n";
	}	
	return 0;
}