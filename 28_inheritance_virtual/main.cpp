#include <iostream>
using namespace std;

class base {
public:
  int i;
};

class derived1: virtual public base {
public:
  int j;
};

class derived2: virtual public base {
public:
  int k;
};

class derived3: public derived1, public derived2 {
public:
  int sum;
  void show() {
    cout << i << " " << j << " " << k << "\n";
  }
};

int main()
{
  cout << "28_inheritance_virtual" << endl;


  derived3 ob;
  ob.i = 10;
  ob.j = 20;
  ob.k = 30;

  ob.sum = ob.i + ob.j + ob.k;

  ob.show();

  return 0;
}
