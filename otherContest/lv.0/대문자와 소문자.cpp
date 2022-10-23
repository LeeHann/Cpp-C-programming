#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    int i = -1;
    while (my_string[++i])
    {
        if (islower(my_string[i]))
        {
            my_string[i] -= 'a'-'A';
        }
        else if (isupper(my_string[i]))
        {
            my_string[i] += 'a'-'A';    
        }
    }
    return my_string;
}