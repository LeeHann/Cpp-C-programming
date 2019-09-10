#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, num=666; cin >> n;
	while (n){
		int noNum = num;
		int six=0;
		while (noNum){
			int temp = noNum % 10;
            if (temp == 6)
            	six++;
            else if(six < 3)
                six = 0;
            noNum /= 10;
		}
		if (six>=3) n--;
		num++;
	}
	cout << num-1 << endl;
	return 0;
}
