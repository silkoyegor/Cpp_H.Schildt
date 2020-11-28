#include <iostream>
using namespace std;

class base1 {
public:
  base1() { cout << "Вызван конструктор BASE-1" << "\n"; }
  ~base1() { cout << "Вызван деструктор BASE-1" << "\n"; }
};

class base2 {
public:
  base2() { cout << "Вызван конструктор BASE-2" << "\n"; }
  ~base2() { cout << "Вызван деструктор BASE-2" << "\n"; }
};

class derived1 : public base1, public base2 {
public: 
  derived1() { cout << "Вызван конструктор DERIVED-1" << "\n"; }
  ~derived1() { cout << "Вызван деструктор DERIVED-1" << "\n"; }
};

class derived2 : public derived1 {
public: 
  derived2() { cout << "Вызван конструктор DERIVED-2" << "\n"; }
  ~derived2() { cout << "Вызван деструктор DERIVED-2" << "\n"; }
};

int main()
{
  cout << "26_inheritance_construct_destruct" << endl;

  derived2 ob;

  return 0;
}
