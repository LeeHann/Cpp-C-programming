#include <iostream>
using namespace std;

int& sf(int &m){
	m=9;
	return m;
}

int main()
{
	int rb = 7;
	int& bob = rb;
	
	cout << rb << " " << bob << endl;
	cout << sf(rb) << endl;//sf로 인해 rb가 변 화 
	cout << rb << endl;
	
	sf(rb) = 11;
	cout << rb << endl;
	cout << sf(rb) << endl;
	
	return 0;
}
