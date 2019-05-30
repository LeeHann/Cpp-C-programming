#include <iostream>
#include <string>
using namespace std;
#define MAXSIZE 100

class Student{
public:
	//생성자 
	Student();
	void set_Student();
	void get_Student() const;
	string get_name() const{
		return name;
	}
	int get_numClasses() const{
		return numClasses;
	}
	string get_classList() const{
		return *classList;
	}
	//복사생성자
	Student(const Student& tg); 
	//할당연산자
	Student& operator=(const Student& rs);
	//소멸자
	~Student(); 
	
private:
	string name;
	int numClasses;
	string *classList;
};

//생성자 
Student::Student():name(name), numClasses(0){
	classList = new string[MAXSIZE];
}
//복사생성자 
Student::Student(const Student& tg):name(tg.name), numClasses(0){
	classList = new string[MAXSIZE];
}

Student& Student::operator=(const Student& rs){
	if(this == &rs){
		return *this;
	}
	else {
		name = rs.name;
		numClasses = rs.numClasses;
		delete [] classList;
		classList = new string[MAXSIZE];
		for(int i=0; i<numClasses; i++)
			classList[i] = *rs.classList;
		return *this;
	}
}

int main()
{
	Student A;
	//입력 
	A.set_Student();
	//출력
	cout << "name = " << A.get_name() << endl;
	cout << "numClasses = " << A.get_numClasses() << endl;
	cout << "classList = " << A.get_classList() << endl;
	
	//복사생성자
	Student B(A); 
	B.get_Student();

	return 0;
}


void Student::set_Student(){
	cout << "name & numClasses & classList ?";
	cin >> name >> numClasses >> *classList;
}
void Student::get_Student() const{
	cout << "name = ? " << name << endl;
	cout << "numClasses = ? " << numClasses << endl;
	cout << "classList = ? " << *classList << endl;
}
//소멸자
Student::~Student(){
	cout << "Bye";
	delete [] classList;
}
