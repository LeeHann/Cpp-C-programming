#include <iostream>
#include <fstream> //���� �����

using namespace std;

int main()
{
	int score, index;
	char grade;
	ifstream scfile;// input file stream , scfile = user select, can change

	scfile.open("score.txt");

	scfile >> index;

	cout << "There are " << index << "people do you evaluate" << endl;

	for (int i=0; i<index; i++)
	{
		scfile >> score;


		switch (score / 10)
		{
			case 9 :
				grade = 'A';
				cout << "Your grade is " << grade <<endl;
				break;
			case 8:
				grade = 'B';
				cout << "Your grade is " << grade <<endl;
				break;
			case 7:
				grade = 'C';
				cout << "Your grade is " << grade <<endl;
				break;
			case 6:
				grade = 'D';
				cout << "Your grade is " << grade <<endl;
				break;
			default:
				grade = 'F';
				cout << "Your grade is " << grade << endl;
				break;
		}
	}
	scfile.close();
	return 0;
}