#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int target)
{
	int start = 0;
	int end = arr.size() - 1;
	int mid = 0;
	while (start <= end)
	{
		mid = (start + end) / 2;
		if (target == arr[mid])
			return arr[mid];
		else if (target < arr[mid])
			end = mid - 1 ;
		else
			start = mid + 1;
	}
	return arr[mid];
}

int main()
{
	cin.tie(NULL); cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	cout << binarySearch(arr, 2);
	return 0;
}