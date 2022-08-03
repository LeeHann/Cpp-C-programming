#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int k, n, tmp;
	vector<int> lans;

	cin >> k >> n;
	for (int i = 0; i < k; i++)
	{// 각 랜선의 길이
		cin >> tmp;
		lans.push_back(tmp);
	}
	
	return 0;
}