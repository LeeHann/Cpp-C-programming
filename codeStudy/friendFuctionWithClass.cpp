#include <iostream>
using namespace std;

class Money{
	public :
		Money(int _dollas=0, int _cents=0);
		void get_Money() const;
		void set_Money();
		int get_dollars() const{
			return dollars;
		}
		int get_cents() const{
			return cents;
		}
		friend const Money operator+(const Money &_a, const Money &_b);
		
	private:
		int cents;
		int dollars;
};

const Money operator+(const Money &_a, const Money &_b)
{
	int allcents = _a.cents + _b.cents;
	int alldollars = _a.dollars + _b.dollars;
	
	return Money(alldollars, allcents);
}

int main()
{
	Money A, B(90, 10), C;
	
	A.set_Money();
	A.get_Money();
	B.get_Money();
	
	C = operator+(A, B);
	C.get_Money();
	
	return 0;	
}

Money::Money(int _dollars, int _cents) : dollars(_dollars), cents(_cents){
}

void Money::get_Money() const {
	cout << dollars << " " << cents << endl;
}

void Money::set_Money(){
	cin >> dollars >> cents;
}

