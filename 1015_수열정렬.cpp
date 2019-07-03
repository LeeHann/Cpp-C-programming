#include <bits/stdc++.h>
using namespace std;
struct num{
	int index;
	int number;
	int index2;
};
struct num a[51];
bool comp1(const num &lhs, const num &rhs){
	if (lhs.number!=rhs.number)
		return lhs.number < rhs.number;
	return lhs.index < rhs.index;
}
bool comp2(const num &lhs, const num &rhs){
	return lhs.index < rhs.index;
}
int main()
{
	int n; cin >> n;
	for (int i=0; i<n; i++) {
		cin >> a[i].number;
		a[i].index=i;
	}
	sort(a, a+n, comp1);
	for (int i=0; i<n; i++)
		a[i].index2=i;
	sort(a, a+n, comp2);
	for (int i=0; i<n; i++){
		cout << a[i].index2 << " ";
	}
	return 0;
}
