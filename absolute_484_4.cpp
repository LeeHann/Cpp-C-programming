#include <iostream>
#include <string>
using namespace std;
#define MAXSIZE 100

class Student{
public:
	//������ 
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
	//���������
	Student(const Student& tg); 
	//�Ҵ翬����
	Student& operator=(const Student& rs);
	//�Ҹ���
	~Student(); 
	
private:
	string name;
	int numClasses;
	string *classList;
};

//������ 
Student::Student():name(name), numClasses(0){
	classList = new string[MAXSIZE];
}
//��������� 
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
	//�Է� 
	A.set_Student();
	//���
	cout << "name = " << A.get_name() << endl;
	cout << "numClasses = " << A.get_numClasses() << endl;
	cout << "classList = " << A.get_classList() << endl;
	
	//���������
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
//�Ҹ���
Student::~Student(){
	cout << "Bye";
	delete [] classList;
}
