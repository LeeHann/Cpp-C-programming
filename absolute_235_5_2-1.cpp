#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;
typedef long long lld;
char a[21], b[21];
int numa[21], numb[21], ans[21];
int main()
{
	while(1)
	{
		scanf("%s %s", a, b);
		int lena, lenb, len;
		lena = strlen(a);
		lenb = strlen(b);
		reverse(a, a+lena);
		reverse(b, b+lenb);
		for(int i=0;i<lena;i++)
			numa[i] = a[i]-48;
		for(int i=0;i<lenb;i++)
			numb[i] = b[i]-48;
		len = lena>lenb?lena:lenb;
		for(int i=0;i<len;i++)
		{
			ans[i] += numa[i]+numb[i];
			if(ans[i]>9)
			{
				ans[i] %= 10;
				ans[i+1]++;
			}
		}
		if(ans[len]!=0)
			len++;
		reverse(ans, ans+len);
		if(ans[20]!=0)
		{
			cout<<"integer overflow!\nplease put in again\n";
			for(int i=0;i<21;i++)
			{
				a[i] = '\0';
				b[i] = '\0';
				numa[i] = 0;
				numb[i] = 0;
				ans[i] = 0;
			}
			continue;
		}
		for(int i=0;i<len;i++)
			cout<<ans[i];
		cout<<endl;
		for(int i=0;i<21;i++)
		{
			a[i] = '\0';
			b[i] = '\0';
			numa[i] = 0;
			numb[i] = 0;
			ans[i] = 0;
		}
		char k;
		cout<<"Continue? (N/Y):";
		cin>>k;
		if(k=='N')
		{
			cout<<"BYE\n";
			return 0;
		}
		else if(k=='Y') continue;
	}
	return 0;
}
