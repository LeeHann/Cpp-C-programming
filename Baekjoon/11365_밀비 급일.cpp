#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin, s);
	while (s!="END"){
		reverse(s.begin(), s.end());
		cout << s << endl;
		getline(cin, s);
	}
	return 0;
}
