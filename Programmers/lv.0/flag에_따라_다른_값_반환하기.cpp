#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, bool flag) {
    return flag ? a + b : a - b;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int a, b, flag;
	cin >> a >> b >> flag;
	cout << solution(a, b, flag) << "\n"; 
	return 0;
}