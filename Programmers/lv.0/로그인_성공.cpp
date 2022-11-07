#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) {
    string answer = "fail";
	for (auto d : db)
	{
		if (id_pw[0] == d[0] && !(id_pw[0] == d[0])) {
			answer = "wrong pw";
		} else if (id_pw[0] == d[0] && id_pw[0] == d[0]) {
			return "login";
		}
	}
    return answer;
}

int main(int argc, char const *argv[])
{
	vector<string> id_pw = {"meosseugi", "1234"};
	vector<vector<string>> db = {{"rardss", "123"}, {"yyoom", "1234"}, {"meosseugi", "1234"}};
	cout << solution(id_pw, db);
	return 0;
}
