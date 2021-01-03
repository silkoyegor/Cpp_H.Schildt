#include <iostream>
using namespace std;

class Base {
public:
  virtual void f() { cout << "В классе Base.\n"; }
  // ...
};

class Derived : public Base {
public:
  void f() { cout << "В классе Derived.\n"; }
};


int main()
{
  Base *bp, b_ob;
  Derived *dp, d_ob;
  
  dp = dynamic_cast<Derived *> (&d_ob);
  if (dp) {
    cout << " Приведение типов "
         << "(из Derived * в Derived *) реализовано.\n";
    dp->f();
  } else
    cout << "Ошибка\n";

  cout << endl;
  
  bp = dynamic_cast<Base *> (&d_ob);
  if (bp) {
    cout << " Приведение типов "
         << "(из Derived * в Base *) реализовано.\n";
    dp->f();
  } else
    cout << "Ошибка\n";
  
  cout << endl;

  bp = dynamic_cast<Base *> (&b_ob);
  if (bp) {
    cout << " Приведение типов "
         << "(из Base * в Base *) реализовано.\n";
    dp->f();
  } else
    cout << "Ошибка\n";
  
  cout << endl;


  dp = dynamic_cast<Derived *> (&b_ob);
  if (dp) {
    cout << "Ошибка\n";
  } else
    cout << " Приведение типов "
         << "(из Base * в Derived *) не реализовано.\n";
  
  cout << endl;

  bp = &d_ob; // bp указывает на объект класса Derived
  dp = dynamic_cast<Derived *> (bp);
  if (dp) {
    cout << " Приведение bp к типу Detived *\n"
         << "реализовано, поскольку bp действительно\n"
         << "Указывает на объект класса Derived.\n";
    dp->f();
  } else
    cout << "Ошибка\n";
  
  cout << endl;

  bp = &b_ob; // bp указывает на объект класса Base
  dp = dynamic_cast<Derived *> (bp);
  if (dp)
    cout << "Ошибка\n";
  else {
    cout << " Теперь приведение bp к типу Derived *\n"
         << "не реализовано, поскольку bp\n"
         << "в действительности указывает на объект\n"
         << "класса Base.\n";
  }

  cout << endl;

  dp = &d_ob; // dp указывает на объект класса Derived
  bp = dynamic_cast<Base *> (dp);
  if (bp) {
    cout << " Приведение dp к типу Base * реализовано.\n";
    bp->f();
  } else 
    cout << "Ошибка\n";


  return 0;
}
