#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	srand(15);//seed, 난수를 발생시키는 출발점

	for (int i=0; i<10; i++)
		cout << rand() << endl;

	for (int i=0; i<10; i++)
		cout << (rand()%10) << endl;

	cout << "Maximum= " << RAND_MAX << endl;
	
	for (int i=0; i<10; i++)
		cout << (RAND_MAX - rand())/static_cast<double>(RAND_MAX) << endl;

	return 0;
}