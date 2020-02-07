#include <bits/stdc++.h>
using namespace std;
string srl[1001];

int sum(const string& a){ //2번 숫자 더하는 함수 
	int plus=0;
	for(int i=0; i<a.size(); i++){
		if(a[i]>='0' && a[i]<='9'){
			plus += a[i]-'0';
		}
	}
	return plus;
}
bool cmp(const string& a, const string& b){
	int sum1 = sum(a), sum2 = sum(b);
	if(a.size() == b.size()){
		if(sum1 == sum2){ //3번 조건 
			for (int i=0; i<a.size(); i++)
			{
				if (a[i] == b[i]) continue;
				return a[i] < b[i];
			}
		}
		else return sum1 < sum2; //2번 조건 
	}
	return a.size() < b.size(); //1번 조건 
}
int main(){
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> srl[i];
	}
	sort(srl, srl+n, cmp);
	for(int i=0; i<n; i++){
		cout << srl[i] << "\n"; 
	}
	return 0;
}
