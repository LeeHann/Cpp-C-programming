#include <bits/stdc++.h>
using namespace std;
char name[100];
int main(){
	int n; bool ck=false; cin >> n;
	for (int i=0; i<n; i++){
		cin >> name; if (strcmp(name, "anj")==0) ck=true;
		name[0] = '\0'; 
	}
	if (ck==true) cout << "����;";
	else cout << "����?"; 
	return 0;
}
