#include <bits/stdc++.h>

using namespace std;

int main()
{
	int num[20], max=0;
	for (int i=0; i<10; i++) scanf("%d", &num[i]);
	sort(num, num+10);
	for (int i=0; i<10; i++) printf("%d", num[i]);
	return 0;
}
