#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	unsigned long long int sum=0;
	scanf("%d", &n); 
	for (int i=1; i<=n; i++){
		for (int j=1; j<=i; j++){
			sum+=9; 
		}
	}
	cout << sum;
	return 0;
}
