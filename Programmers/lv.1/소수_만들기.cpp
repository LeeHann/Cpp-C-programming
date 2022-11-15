#include <vector>
#include <iostream>
using namespace std;

bool isPrime(int num) {
	for (int i=2; i*i <= num; i++)
	{
		if (num % i == 0)
			return false;
	}
	return true;
}

int Rprime(vector<int> nums, int pos, int cnt, int num) {
	int sum = 0;

	if (cnt == 3)
	{
		return isPrime(num) ? 1 : 0;
	}
	for (int i=pos; i < nums.size(); i++)
	{
		cout << i+1 << " " << cnt+1 << " " << num+nums[i] << "\t"; 
		sum += Rprime(nums, i+1, cnt+1, num+nums[i]);
	}
	cout << "\n";
	return sum;
}

int solution(vector<int> nums) {
	return Rprime(nums, 0, 0, 0);
}

int main(int argc, char const *argv[])
{
	vector<int> nums = {1, 2, 7, 6, 4};
	cout << solution(nums);
	return 0;
}
