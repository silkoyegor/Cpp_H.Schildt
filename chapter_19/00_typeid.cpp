#include <iostream>
#include <typeinfo> // typeid
/* Оператор typeid возвращает ссылку на объект типа type_info
// В классе type_info определены следующие public-члены:
// bool operator=(const type_info &ob);
// bool operator!=(const type_info &ob);
// bool before(const type_info &ob);
// const char *name();
*/
using namespace std;

class myclass {};
class Base {
  virtual void func() {};
};

class Derived1: public Base {};
class Derived2: public Base {};

/* Демонстрация применения оператора typeid к ссылочному параметру. */
void WhatType(Base &ob){
  cout << "Параметр ob ссылается на объект типа " << typeid(ob).name() << endl;
}

int main()
{
  int i, j;
  float f;
  myclass obj;

  cout << "Тип переменной i: " << typeid(i).name() << endl;
  cout << "Тип переменной f: " << typeid(f).name() << endl;
  cout << "Тип переменной obj: " << typeid(obj).name() << endl;
 
  if(typeid(i) == typeid(j)) cout << "Типы переменных i и j одинаковы.\n";
  if(typeid(i) != typeid(f)) cout << "Типы переменных i и f неодинаковы.\n";
  
  cout << "\n" << typeid(int).name();

  cout << "\n\n";
  Base *p, baseob;
  Derived1 ob1;
  Derived2 ob2;
  p = &baseob;
  cout << "Переменная p указывает на объект типа " << typeid(*p).name() << endl;
  p = &ob1;
  cout << "Переменная p указывает на объект типа " << typeid(*p).name() << endl;
  p = &ob2;
  cout << "Переменная p указывает на объект типа " << typeid(*p).name() << endl;
 
  cout << "\n";  
  WhatType(baseob);
  WhatType(ob1);
  WhatType(ob2);

  return 0;
}
