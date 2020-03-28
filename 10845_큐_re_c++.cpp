#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main(){
	int n;
	string com;
	cin >> n;
	queue<int> q;
	
	while(n--){
		cin >> com;
		if(com == "push"){
			int num;
			cin >> num;
			q.push(num);
		}
		else  if(com == "pop"){
			if(q.empty())
				cout << "-1\n";
			else {
				cout << q.front() << endl;
				q.pop();
			}
		}
		else if(com == "size"){
			cout << q.size() << endl;
		}
		else if(com == "empty"){
			if(q.empty()) cout << "1\n";
			else cout << "0\n";
		}
		else if(com == "front"){
			if(q.empty()) cout << "-1\n";
			else cout << q.front() << endl;
		}
		else if(com == "back"){
			if(q.empty()) cout << "-1\n";
			else cout << q.back() << endl;
		}
	}
	return 0;
}
