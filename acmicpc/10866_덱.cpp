#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, num;
	string com;
	scanf("%d", &n);
	
	deque <int> d;
	
	while(n--){
		cin >> com;
		if(com == "push_front"){
			scanf(" %d", &num);
			d.push_front(num);
		}
		else if(com == "push_back"){
			scanf(" %d", &num);
			d.push_back(num);
		}
		else if(com == "pop_front") {
			if (!d.empty()){
				printf("%d\n", d.front());
				d.pop_front();
			}
			else printf("-1\n");
		}
		else if(com == "pop_back"){
			if(!d.empty()){
				printf("%d\n", d.back());	
				d.pop_back();
			} 
			else printf("-1\n");
		}
		else if(com == "size") printf("%d\n", d.size());
		else if(com == "empty") printf("%d\n", (d.empty() ? 1:0));
		else if(com == "front"){
			if(!d.empty()) printf("%d\n", d.front());
			else printf("-1\n");
		}
		else if(com == "back"){
			if(!d.empty()) printf("%d\n", d.back());
			else printf("-1\n");
		}
	}
	return 0;
}
