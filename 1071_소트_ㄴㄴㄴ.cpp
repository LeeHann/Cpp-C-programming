#include <bits/stdc++.h>
using namespace std;

int num[51];

int main()
{
	int n, tmp, j=0;
	scanf("%d", &n);
	for (int i=0; i<n; i++)
		scanf("%d", &num[i]);
	sort(num, num+n);
	do{
		printf("%d", num[j]);	
	}while()
	return 0;
}
