#include <bits/stdc++.h>

using namespace std;

int main()
{
	int min1, min2, min3, min4;
	scanf("%d %d %d %d", &min1, &min2, &min3, &min4);
	int s=min1+min2+min3+min4;
	int man1, man2, man3, man4;
	scanf("%d %d %d %d", &man1, &man2, &man3, &man4);
	int t=man1+man2+man3+man4;
	if(s>=t) printf("%d", s);
	else printf("%d", t);
	return 0;
}
