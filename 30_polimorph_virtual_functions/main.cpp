#include <iostream>
using namespace std;

class base {
public:
  virtual void who() { cout << "Базовый класс.\n"; }
};

class first_d : public base {
public:
  void who() { cout << "Первый производный класс.\n"; }
};

class second_d : public base {
public:
  void who() { cout << "Второй производный класс.\n"; }
};

int main()
{
  cout << "30_polimorph_virtual_functions" << endl;

  base base_obj;
  base *p;
  first_d first_ob;
  second_d second_ob;
  p = &base_obj;
  p -> who();
  p = &first_ob;
  p -> who();
  p = &second_ob;
  p -> who();

  return 0;
}
