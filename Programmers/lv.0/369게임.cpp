#include <iostream>
using namespace std;

int solution(int order) {
    int answer = 0;
    while (order > 0)
    {
        if (order%10 != 0 && !((order % 10) % 3))
            answer++;
        order /= 10;
    }
    return answer;
}

int main()
{
	int order;
	cin >> order;
	cout << solution(order);
	return 0;
}