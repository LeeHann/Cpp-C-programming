#include <iostream>
#include <fstream>
#include <cstring>
#include <strstream>
 
using namespace std;

class Student{
	public:
		char studentID[10];
		char name[10];
		char major[20];
		char phone[20];
		char birth[10];	
	Student(char* ID, char* Name, char* Major, char* Phone, char* Birth){
		strcpy(studentID, ID);
		strcpy(name, Name);
		strcpy(major, Major);
		strcpy(phone, Phone);
		strcpy(birth, Birth);
	}	
};

istream & operator>>(istream & stream, Student &p){
	stream.getline(p.studentID, 15, '|');
	if(strlen(p.studentID)==0)
		return stream;
	stream.getline(p.name,15,'|');
	stream.getline(p.major,25,'|');
	stream.getline(p.phone,25,'|');
	stream.getline(p.birth,15, '|');
	return stream;
}

int WriteStudent(ostream &stream, Student &p){
	const int MaxBufferSize = 200;
	char buffer[MaxBufferSize];
	strcpy(buffer,p.studentID); strcat(buffer,"|");
	strcpy(buffer,p.name); strcat(buffer,"|");
	strcpy(buffer,p.major); strcat(buffer,"|");
	strcpy(buffer,p.phone); strcat(buffer,"|");
	strcpy(buffer,p.birth); strcat(buffer,"|");
	
	int length = strlen(buffer);
	stream.write((char*)&length, sizeof(length));
	stream.write(buffer, length);
	return 1;
}

int ReadStudent(istream & stream, Student &p){
	int length;
	stream.read((char*)&length, sizeof(length));
	if(stream.fail()){
		p.studentID[0]=0;
		cout << "파일을 읽을 수 없습니다." << endl;
		return 0;
	}
	char *buffer = new char[length+1];
	stream.read(buffer, length);
	buffer[length] = 0;
	istrstream strbuff(buffer);
	strbuff >> p;
	cout << "\n레코드 출력" << endl;
	cout << p.studentID << endl;
	cout << p.name << endl;
	cout << p.major << endl;
	cout << p.phone << endl;
	cout << p.birth << endl;
	delete buffer;
	return 1;
}
int main(){
	char filename[15] = "학번.txt";
	char studentID[10] = "201812809";
	char name[10] = "이한나";
	char major[20] = "IT정보공학과";
	char phone[20] = "01039398435";
	char birth[10] = "990104";
	
	Student S_in(studentID, name, major, phone, birth);
	ofstream fout(filename, ios::out);
	
	Student S_out(studentID, name, major, phone, birth);
	WriteStudent(fout, S_out);
	fout.close();
	
	ifstream fin(filename, ios::in);
	ReadStudent(fin, S_in);
	fin.close();
	
	return 0;
}
