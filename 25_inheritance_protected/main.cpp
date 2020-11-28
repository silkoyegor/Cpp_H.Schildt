#include <iostream>
using namespace std;

class base {
  int i;
protected:
  int j;
public:
  int k;
  void seti(int a) { i = a; }
  int geti() { return i; }
};

//наследуем класс base как пprotected-класс
class derived : protected base {
public:
  void setj(int a) { j = a; } // j - protected
  void setk(int a) { k = a; } // k - protected
  int getj() { return j; }
  int getk() {return k; }
  
  void setinher_i(int a) { seti(a); }
  int getinher_i() { return geti(); }
};


int main()
{
  cout << "25_inheritance_protected" << endl;

  derived ob;

  ob.setinher_i(5);

  ob.setj(10);
  ob.setk(20);
  cout << ob.getinher_i() << " " << ob.getj() << " " << ob.getk() << "\n";

  return 0;
}
