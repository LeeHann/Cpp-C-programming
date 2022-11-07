#include <bits/stdc++.h>
using namespace std;
int main(){
	for (int i=-2; i<10; i++){
		for (int j=-2; j<10; j++){
			for (int k=-2; k<10; k++){
				for (int l=-2; l<10; l++){
					if (i>=0) cout << i; else if(i==-2) cout << "#"; else cout << "*";
					if (j>=0) cout << j; else if(j==-2) cout << "#"; else cout << "*";
					if (k>=0) cout << k; else if(k==-2) cout << "#"; else cout << "*";
					if (l>=0) cout << l; else if(l==-2) cout << "#"; else cout << "*";
					printf("\n");
				}
			}
		}
	}
	return 0;
}
