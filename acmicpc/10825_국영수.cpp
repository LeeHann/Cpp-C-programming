#include <bits/stdc++.h>
using namespace std;
struct student
{
	char name[11];
	int a,b,c;	
};

int main()
{
	struct student num[100001];
	int n;
	scanf("%d", &n);
	for (int i=0; i<n; i++) cin>>num[i].name>>num[i].a>>num[i].b>>num[i].c;
	sort(num, num+n);	
	for(int i=0; i<n; i++) cout<<num[i].name<<endl;
	return 0;
}
