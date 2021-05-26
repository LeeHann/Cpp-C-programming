#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
  ifstream in("C:\\Users\\ÀÌÇÑ³ª\\Desktop\\text.txt");
  string s;

  while(getline(in, s)){
  	cout << s << endl;
  }
  in.close();
  return 0;
}
