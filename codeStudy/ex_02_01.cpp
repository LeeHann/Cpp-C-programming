#include <iostream>
using namespace std;
int main()
{
	int score;
	bool decision;

	cout << "Enter your score: ";
	cin >> score;

	cout.setf(ios::boolalpha);

	cout << (score >= 60) << endl;
	
	decision = (score >= 60);
	cout << decision << endl;

	cout << !(false || true) << endl;
	cout << ((5>6) && (7/0)) << endl; // 단락회로 평가

	return 0;
}