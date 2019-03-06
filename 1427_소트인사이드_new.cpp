#include <bits/stdc++.h>

using namespace std;

int main()
{
	char num[10];
	int tmp;
	
	cin>>num;
	
	for (int i=0; i<strlen(num); i++)
	{
		for (int j=0; j<strlen(num); j++)
		{
			if (num[i]>num[j])
			{
				tmp = num[i];
				num[i] = num[j];
				num[j] = tmp;
			}
		}
	}
	for (int i= 0; i<strlen(num); i++) printf("%c", num[i]);
	return 0;
 } 
