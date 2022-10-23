#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    if (direction == "right")
    {
        numbers.insert(numbers.begin(), numbers[numbers.size()-1]);
        numbers.erase(numbers.end()-1);
    }
    if (direction == "left")
    {
        numbers.push_back(numbers[0]);
        numbers.erase(numbers.begin());
    }
    return numbers;
}