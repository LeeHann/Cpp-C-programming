#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> number) {
    int answer = 0;
	for (int i=0; i<number.size(); i++)
	{
		for (int j=i+1; j<number.size(); j++)
		{
			for (int k=j+1; k<number.size(); k++)
			{
				if (number[i] + number[j] + number[k] == 0)
					answer++;
			}
		}
	}
    return answer;
}

int main(int argc, char const *argv[])
{
	vector<int> number = {-2, 3, 0, 2, -5};
	cout << solution(number);
	return 0;
}
