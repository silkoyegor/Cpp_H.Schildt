#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class sample {
  char *s;
public:
  sample();   // обычный конструктор
  sample(const sample &ob); // консруктор копии
  ~sample() {
    if(s) delete [] s;
    cout << "Освобождение s-памяти.\n";
  }
  void show() { cout << s << "\n"; }
  void set(char *str);
  sample operator=(sample &ob); // перегруженный оператор присваивания
};

sample::sample()
{
  s = new char('\0'); // Член указывает на null-строку
}

sample::sample(const sample &ob)
{
  s = new char[strlen(ob.s) + 1];
  strcpy(s, ob.s);
}

void sample::set(char *str)
{
  s = new char[strlen(str) + 1];
  strcpy(s, str);
}

sample sample::operator=(sample &ob)  //TODO:  WHAT IS FUCKING WRONG HERE?
{
  /* Если выделенная область памяти имеет 
  недостаточный размер, выделяется ноавя
   область памяти */
  if(strlen(ob.s) > strlen(s)) {
    delete [] s;
    s = new char[strlen(ob.s) + 1];
  }
  strcpy(s, ob.s);
  return *this;
}


sample input()
{
  char instr[80];
  sample str;
  cout << "Ввелите строку: ";
  cin >> instr;
  str.set(instr);
  return str;
}

int main()
{
  cout << "21_constructors_copy" << endl;

  sample ob;
  // присваиваем объект, возвращаеммый
  // функцией input(), объекту ob
  ob = input();
  ob.show();
 
  return 0;
}
