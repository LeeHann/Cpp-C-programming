#include <bits/stdc++.h>
using namespace std;

char s[21];

int main()
{
	int t, r;
	scanf("%d", &t);
	for (int i=0; i<t; i++)
	{
		cin >> r >> s;
		for (int k=0; k<strlen(s); k++){
			for (int j=0; j<r; j++){
				printf("%c", s[k]);
			}
		}
		printf("\n"); 
	}
	return 0;
}
