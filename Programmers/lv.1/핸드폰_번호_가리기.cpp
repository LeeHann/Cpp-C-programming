#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string phone_number) {
	return phone_number.replace(0, phone_number.length() - 4, string(phone_number.length() - 4, '*'));
}

int main(int argc, char const *argv[])
{
	cout << solution("01033334444");	
	return 0;
}
// for (int i=0; i < phone_number.length() - 4; i++)
// 	phone_number[i] = '*';
// return phone_number;