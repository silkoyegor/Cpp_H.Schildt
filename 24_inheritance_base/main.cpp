#include <iostream>
using namespace std;

class base {
  int i, j;
public:
  void set(int a, int b) { i = a; j = b; }
  void show() { cout << "i = " << i << " / j = " << j << "\n";  }
};

class derived: public base {
  int k;
public:
  derived(int x) { k = x; }
  void show_k() { cout << "k = " << k << "\n"; }
};

int main()
{
  cout << "24_inheritance_base" << endl;

  derived ob(3);
  ob.set(1, 2); // доступ к членам класса base
  ob.show(); //  доступ к членам класса base
  ob.show_k(); // доступ к членам класса derived

  return 0;
}
