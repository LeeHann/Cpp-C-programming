#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    string ban[] = {"a", "e", "i", "o", "u"};
    for (auto b : ban)
    {
        while (my_string.find(b) != string::npos)
        {
            my_string.replace(my_string.find(b), 1, "");
        }
    }
    return my_string;
}