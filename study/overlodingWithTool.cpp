#include <iostream>
#include <cmath>
using namespace std;

class Money{
	public:
		Money(int _dollars=0, int _cents=0);
		void set_Money();
		void get_Money() const;
		int get_dollars() const{
			return dollars;
		}
		int get_cents() const{
			return cents;
		}
		friend ostream& operator<<(ostream &ops, const Money &m);
		friend istream& operator>>(istream &ips, Money &m);
		
	private:
		int dollars;
		int cents;
};

ostream& operator<<(ostream &ops, const Money &m){
	ops << "#";
	ops << m.dollars;
	ops << "999";
	return ops;
}
istream& operator>>(istream &ips, Money &m){
	double amount;
	ips >> amount;
	m.dollars = static_cast<int>(amount);
	int cents = static_cast<int>(floor(amount*100+0.5));
	m.cents = cents%100;
	return ips;
}

int main()
{
	Money A(10, 20), B, C;
	
	B.set_Money();
	A.get_Money();
	B.get_Money();
	
	cout << A << B;
	cin >> C;
	cout << C;
	
	return 0;
}

Money::Money(int _dollars, int _cents) : dollars(_dollars), cents(_cents){
}
void Money::set_Money(){
	cin >> dollars >> cents;
}
void Money::get_Money() const{
	cout << dollars << " " << cents << endl;
}

