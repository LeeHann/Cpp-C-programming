#include <bits/stdc++.h>
using namespace std;
int main()
{
	int h,m;
	cin >> h >> m;
	if(m<45)
	{
		m = 60+(m-45);
		h--;
		if(h<0)
			h += 24;
		printf("%d %d", h, m);	
	}
	else printf("%d %d", h, m-45);		
	return 0;
 } 
