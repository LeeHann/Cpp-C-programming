#include <bits/stdc++.h>
using namespace std;
int pack[101], pic[101]; 
int main(){
	int n, m, minPck, minPic, pay=0; cin >> n >> m;
	for (int i=0; i<m; i++)
		cin >> pack[i] >> pic[i];
	sort(pack, pack+m); sort(pic, pic+m);
	minPck = pack[0]; minPic = pic[0];
	if (minPck <= minPic*6)//��Ʈ�� �����Ҷ� 
	{
		while(n>=6){
			pay+=minPck;
			n-=6;
		}
		if(n && minPck <= n*minPic) pay+=minPck;
		else if (n && minPck > n*minPic) pay += minPic*n;
	}
	else//������ �����Ҷ� 
		pay += minPic*n;
	cout << pay << endl;
	return 0;
}
