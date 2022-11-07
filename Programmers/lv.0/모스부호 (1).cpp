#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> split(string str, char delimiter)
{
    vector<string> internal;
    stringstream ss(str);
    string temp;
    
    while (getline(ss, temp, delimiter)) 
    {
        internal.push_back(temp);
    }
    return internal;
}

const string toString(int val)
{
    string ret = "";
    ret += val;
    return ret;
}

string solution(string letter) {
    vector<string> morse = { 
        ".-", "-...","-.-.","-..",".","..-.",
        "--.","....","..",".---","-.-",".-..",
        "--","-.","---",".--.","--.-",".-.",
        "...","-","..-","...-", ".--", "-..-",
        "-.--","--.."
    };
    
    vector<string> s = split(letter, ' ');
    for (auto i : s)
    {
        for (int j=0; j<morse.size(); j++)
        {
            if (i == morse[j])
            {
                letter.replace(letter.find(morse[j]), morse[j].length(), toString('a'+j));
                if (letter.find(' ') != string::npos)
                    letter.replace(letter.find(' '), 1, "");        
            }
        }
    }
    return letter;
}