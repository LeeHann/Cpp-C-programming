#include <bits/stdc++.h>
using namespace std;
string srl[1001];

int sum(const string& a){ //2�� ���� ���ϴ� �Լ� 
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
		if(sum1 == sum2){ //3�� ���� 
			for (int i=0; i<a.size(); i++)
			{
				if (a[i] == b[i]) continue;
				return a[i] < b[i];
			}
		}
		else return sum1 < sum2; //2�� ���� 
	}
	return a.size() < b.size(); //1�� ���� 
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
