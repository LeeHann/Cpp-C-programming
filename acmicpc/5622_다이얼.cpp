#include <bits/stdc++.h>
using namespace std;
int main(){
	string dial; cin >> dial; int sum=0;
	for (int i=0; i<dial.size(); i++){
		if(dial[i]>=65 && dial[i]<68) sum+=3;//A
		else if (dial[i]>=68 && dial[i]<71) sum+=4;//D
		else if (dial[i]>=71 && dial[i]<74) sum+=5;//G
		else if (dial[i]>=74 && dial[i]<77) sum+=6;//J
		else if (dial[i]>=77 && dial[i]<80) sum+=7;//M
		else if (dial[i]>=80 && dial[i]<84) sum+=8;//P
		else if (dial[i]>=84 && dial[i]<87) sum+=9;//T
		else if (dial[i]>=87 && dial[i]<91) sum+=10;
	}
	cout << sum;
	return 0;
}
