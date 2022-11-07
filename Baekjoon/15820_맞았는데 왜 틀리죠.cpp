#include <bits/stdc++.h>
using namespace std;
int smt[100], stt[100], ans1[100], ans2[100];
int main()
{
	int s1, s2, i, cnt=0, cnt_1=0;
	cin>>s1>>s2;
	for (i=0; i<s1; i++) 
	{
		cin>>smt[i]>>ans1[i];
	}
	while (i>=0)
	{
		if (smt[i] != ans1[i]) cnt++;
		i--;
	}
	for (i=0; i<s2; i++)
	{
		cin>>stt[i]>>ans2[i];
	}
	while (i>=0)
	{
		if (stt[i] != ans2[i]) cnt_1++;
		i--;
	}
	if (cnt != 0) cout<<"Wrong Answer";
	else if (cnt_1 != 0) cout<<"Why Wrong!!!";
	else if (cnt == 0 && cnt_1 == 0) cout<<"Accepted";
	return 0;
}
