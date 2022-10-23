#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    int i = -1;
    while (my_string[++i])
    {
        if (isupper(my_string[i]))
            my_string[i] += 'a' - 'A';
    }
    sort(my_string.begin(), my_string.end());
    return my_string;
}