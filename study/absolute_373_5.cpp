#include <iostream>
using namespace std;

class Vector2D{
public:
	Vector2D(int _x=0, int _y=0);
	void getPoint() const;
	void setPoint();
	int getX() const{
		return x;
	}
	int getY() const{
		return y;
	}
private:
	int x;
	int y;	
};

const Vector2D operator+(const Vector2D& a, const Vector2D& b)
{
	int multiX = a.getX()*b.getX();
	int multiY = a.getY()*b.getY();
	return Vector2D(multiX, multiY);
}

int main()
{
	Vector2D A(10,20), B, C;
	
	//입력
	B.setPoint();
	//연산자 오버로딩
	C = operator+(A, B); 
	//출력 
	cout << "A: " ; A.getPoint(); cout << endl;
	cout << "B: " ; B.getPoint(); cout << endl;
	cout << "C: " ; C.getPoint(); cout << endl;
	
	return 0;
}

Vector2D::Vector2D(int _x, int _y) : x(_x), y(_y){
}
void Vector2D::getPoint() const{
	cout << "X & Y = " << x << " " << y;
}
void Vector2D::setPoint(){
	cout << "X & Y = ?"; cin >> x >> y;
}
