#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
  ifstream in("C:\\Users\\���ѳ�\\Desktop\\text.txt");
  string s;
//���� ���� ��ü �б� 
  if (in.is_open()) {
    // ��ġ �����ڸ� ���� ������ �ű� 
    in.seekg(0, std::ios::end);

    //��ġ �б�
    int size = in.tellg();

    // �� ũ���� ���ڿ��� �Ҵ�
    s.resize(size);

    // ��ġ �����ڸ� �ٽ� ���� �� ������ �ű� 
    in.seekg(0, std::ios::beg);

    // ���� ��ü ������ �о ����
    in.read(&s[0], size);
    cout << s << endl;
  }
  in.close();
  
  cout << endl;
// seeking ����ؼ� ù��° ģ�� ���ڵ� ��� 
  ifstream Seek("C:\\Users\\���ѳ�\\Desktop\\text.txt");
  if(Seek.is_open()){
  	Seek.seekg(0, std::ios::beg);
  	getline(Seek, s);
  	cout << s << endl;
  }
  	
  return 0;
}
