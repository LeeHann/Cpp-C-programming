#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
  ifstream in("C:\\Users\\이한나\\Desktop\\text.txt");
  string s;
//파일 내용 전체 읽기 
  if (in.is_open()) {
    // 위치 지정자를 파일 끝으로 옮김 
    in.seekg(0, std::ios::end);

    //위치 읽기
    int size = in.tellg();

    // 그 크기의 문자열을 할당
    s.resize(size);

    // 위치 지정자를 다시 파일 맨 앞으로 옮김 
    in.seekg(0, std::ios::beg);

    // 파일 전체 내용을 읽어서 저장
    in.read(&s[0], size);
    cout << s << endl;
  }
  in.close();
  
  cout << endl;
// seeking 사용해서 첫번째 친구 레코드 출력 
  ifstream Seek("C:\\Users\\이한나\\Desktop\\text.txt");
  if(Seek.is_open()){
  	Seek.seekg(0, std::ios::beg);
  	getline(Seek, s);
  	cout << s << endl;
  }
  	
  return 0;
}
