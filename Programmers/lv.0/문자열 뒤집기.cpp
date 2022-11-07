#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    for (int i=0; i<my_string.length()/2; i++)
    {
        char c = my_string[i];
        my_string[i] = my_string[my_string.length() - i - 1];
        my_string[my_string.length() - i - 1] = c;
    }
    return my_string;
}