#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;


class sample {
  char *s;
public:
  sample() { s = 0; }
  ~sample() {
    if(s) delete [] s;
    cout << "Освобождение s-памяти.\n";
  }
  
  void show() { cout << s << "\n"; }
  void set(char *str) {
    s = new char[strlen(str)+1];
    strcpy(s, str);
  }
};

sample input()
{
  char instr[80];
  sample str;

  cout << "Введите строку: ";
  cin >> instr;
  
  str.set(instr);
  return str;
}

int main()
{
  cout << "19_return_obj_by_func_problem" << endl;

  sample ob;
  
  // ПРисваиваем объект, возвращаемый
  // функцией input(), объекту ob.
  ob = input(); // Эта инструкция генерирует ошибку!
  ob.show(); // Отображение мусора

  return 0;

  return 0;
}
