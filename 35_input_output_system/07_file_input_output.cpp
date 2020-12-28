#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  // пишем в файл
  ofstream out("07_test_text_file");
  if(!out){
    cout << "Не удается открыть файл. \n";
    return 1;
  }
  out << 10 << " " << 123.23 << "\n";
  out << "Hello everybody!";
  out.close();

  //считываем из файла
  int i;
  float f;
  char str[80];
  
  ifstream in("07_test_text_file");
  if (!in) {
    cout << "Не удается открыть файл \n";
    return 2;
  }

  in >> i;
  in >> f;
  in >> str;
  
  cout << i << "\n" << f << "\n"; 
  cout << str << "\n";
  in.close();

  return 0;
}
