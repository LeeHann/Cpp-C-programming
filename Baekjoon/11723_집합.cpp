#include <bits/stdc++.h>
using namespace std;
int s=0;
int main(){
	ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
	int m;
	cin >> m;
	
	while(m--){
		int x;
		string i;
		cin >> i;
		if(i == "add"){
			cin >> x;
			if(s | (1<<x))
				s |= (1<<x);		
		}
		else if(i == "remove"){
			cin >> x;
			if(s & (1<<x))
				s ^= (1<<x);
		}
		else if(i == "check"){
			cin >> x;
			if(s & (1<<x)) cout << "1\n";
			else cout << "0\n";
		}
		else if(i == "toggle"){
			cin >> x;
			if(s & (1<<x)) s ^= (1<<x);
			else s |= (1<<x);
		}
		else if(i == "all"){
			for(int j=1; j<=20; j++){
				if(s| (1<<j))s |= (1 << j);
			}
		}
		else if(i == "empty"){
			s = 0;
		}
	}	
	return 0;
}
