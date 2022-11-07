#include <bits/stdc++.h>
using namespace std;
int main(){
	char str[101];
	while(1){
		cin.getline(str, sizeof(str));
		if(str[0]=='.' && str[1]=='\0') break;
		
		stack<char> st;
		bool bal = true;
		for(int i=0; i<strlen(str); i++){
			if(str[i] == '[')
				st.push(str[i]);
			else if(str[i] == ']'){
				if(st.empty() || st.top() != '[') bal = false;
				else st.pop();					
			}
			else if(str[i] == '(')
				st.push(str[i]); 
			else if(str[i] == ')'){
				if(st.empty() || st.top() != '(') bal = false;
				else st.pop();
			}
		}
		if(bal == true && st.empty()) printf("yes\n");
		else printf("no\n");
	}
	return 0;
}
