#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	char vps[51];
	scanf(" %d", &t);
	while(t--){
		scanf(" %s", vps);
		stack<char> st;
		bool tf = true;
		for(int i=0; i<strlen(vps); i++){
			if(vps[i] == '(')
				st.push(vps[i]);
			else if(vps[i] == ')'){
				if(st.empty() || st.top() != '(')
					tf = false;
				else st.pop();
			}
		}
		if(tf==true && st.empty()) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
