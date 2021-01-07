#include <iostream>
#include <fstream> //파일 입출력
#include <string>

using namespace std;

int main()
{
	int score, index;
	char grade;
	ifstream scfile;// input file stream , scfile = user select, can change
	string name;

	scfile.open("score.txt");

	scfile >> index;

	cout << "There are " << index << "people do you evaluate" << endl;

	for (int i=0; i<index; i++)
	{
		scfile >> name;
		scfile >> score;


		switch (score / 10)
		{
			case 9 :
				grade = 'A';
				cout << name;
				cout << "'s grade is " << grade <<endl;
				break;
			case 8:
				grade = 'B';
				cout << name;
				cout << "'s grade is " << grade <<endl;
				break;
			case 7:
				grade = 'C';
				cout << name;
				cout << "'s grade is " << grade <<endl;
				break;
			case 6:
				grade = 'D';
				cout << name;
				cout << "'s grade is " << grade <<endl;
				break;
			default:
				grade = 'F';
				cout << name;
				cout << "'s grade is " << grade << endl;
				break;
		}
	}
	scfile.close();
	return 0;
}