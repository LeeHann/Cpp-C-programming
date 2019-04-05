#include <iostream>
using namespace std;

int main()
{
	int i, max, sc[5];
	cout << "Enter 5 numbers: ";
	for (i=0; i<5; i++)
		cin >> sc[i];
	max = sc[0];
	for (i=0; i<5; i++)
	if (sc[i] > max) max=sc[i];
		cout << "Max = " << max << endl;
	cout << "Defferences" << endl;
	for (i=0; i<5; i++)
		cout << (max-sc[i]) << endl;
	return 0;
}