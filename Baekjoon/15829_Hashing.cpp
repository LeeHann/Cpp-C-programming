#include <bits/stdc++.h>
#define MOD 1234567891
using namespace std;

int main(){
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int l; cin >> l;
	string str; cin >> str;
	long long hashing = 0;
	long long r = 1;

	for(int i=0; i<str.length(); i++)
	{
		hashing = (hashing + (str[i] - 'a'+1) * r)%MOD;
		r = (r*31)%MOD;
	}

	cout << hashing << "\n";
	return 0;
}