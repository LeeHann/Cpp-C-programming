#include <bits/stdc++.h>
using namespace std;
int num[101];

int find(int m){
	int max=0;
	for (int i=1; num[i]!=0; i++){
		for (int j=1; num[j]!=0; j++){
			for (int k=1; num[k]!=0; k++)
			{
				if (i!=j && j!=k && k!=i){
					if (m >= num[i]+num[j]+num[k]){
						if(max <= num[i]+num[j]+num[k])
							max = num[i]+num[j]+num[k];
					}
				}
			}
		}
	}
	return max;
}

int main()
{
	int n, m; cin >> n >> m;
	for (int i=1; i<=n; i++) cin >> num[i];
	cout << find(m);
	return 0;
}
