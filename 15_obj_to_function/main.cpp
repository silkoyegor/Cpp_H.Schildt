#include <iostream>
using namespace std;

class OBJ {
  int i;
public:
  void set_i(int x) { i = x; }
  void out_i() { cout << i << " "; }
};

void f(OBJ x)
{
  x.out_i();
  x.set_i(100);
  x.out_i();
}

int main()
{
  cerr << "15_obj_to_function" << endl;
  
  OBJ o;
  o.set_i(10);
  f(o);
  o.out_i();

  return 0;
}
