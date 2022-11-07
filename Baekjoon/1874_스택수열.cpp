#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
	cin.tie(NULL); cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int n, tmp, stVal = 1;
	vector<string> sym;
	stack<int> st;

	cin >> n;
	for (int i = 0; i < n; i++)	// sym용
	{
		cin >> tmp;	// 입력이 현재 위치보다 크거나 같다면 push
		while (tmp >= stVal)
		{
			st.push(stVal);
			sym.push_back("+");
			stVal++;
		}
		if (tmp == st.top())	// 입력이 stack top 과 같다면 pop
		{
			st.pop();
			sym.push_back("-");
		}
		
	}

	if (st.empty())
		for (int i=0; i<sym.size(); i++) cout << sym[i] << "\n";
	else cout << "NO";
	return 0;
}