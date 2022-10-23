#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) {
    int i = 0, j = 0, k = 0;
    while (str1[i])
    {
		k = 0; j = 0;
        while (str1[i+k] == str2[j])
        {
            k++;j++;
        }
        if (j >= str2.length()) return 1;
        i++;
    }
	if (str1 == str2) return 1;
    return 2;
}