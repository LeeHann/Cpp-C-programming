#include <iostream>
using namespace std;

int solution(int n)
{
	int ans, tmp;

	ans = 0;
	tmp = n;
	while (tmp >= 5)
	{
		if (tmp % 125 == 0)
			ans += 3;
		else if (tmp % 25 == 0)
			ans += 2;
		else if (tmp%5 == 0)
			ans += 1;
		tmp--;
	}
	return ans;
}

int main()
{
	int n;
	
	cin >> n;
	cout << solution(n);
	return 0;
}