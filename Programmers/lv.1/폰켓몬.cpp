#include <vector>
#include <iostream>
#include <unordered_set>
#include <set>
using namespace std;

int num[200005];

int solution(vector<int> nums)
{
	// int numCnt = 0;	
	// for (int i=0; i<nums.size(); i++)
	// {
	// 	num[nums[i]]++;
	// }
	// for (int i=0; i<200001; i++)
	// {
	// 	if (num[i] > 0)
	// 		numCnt++;
	// }
    // return numCnt > nums.size()/2 ? nums.size()/2 : numCnt;
	// unordered_set<int> s(nums.begin(), nums.end());
	set<int> s(nums.begin(), nums.end());

	return min(s.size(), nums.size()/2);
}

int main(int argc, char const *argv[])
{
	vector<int> nums = {3,3,3,2,2,2};
	cout << solution(nums);
	return 0;
}
