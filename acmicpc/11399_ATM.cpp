#include <bits/stdc++.h>
using namespace std;
int ps[1001], grid[1001];
int main(){
	int n, time = 0; cin >> n;
	for (int i=0; i<n; i++)
		cin >> ps[i];
	sort(ps, ps+n);
	grid[0] = ps[0];
	time += grid[0];
	for (int i=1; i<n; i++){
		grid[i] = grid[i-1] + ps[i];
		time += grid[i];
	}
	cout << time << endl;
	return 0;
}
