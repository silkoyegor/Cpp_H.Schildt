#include <iostream>
using namespace std;

class myclass {
  int val;
public:
  myclass(int i) { val = i; cout << "Constructed\n"; }
  ~myclass() { cout << "Destructed\n"; }
  int getval() { return val; }
};

void display(myclass ob) {
  cout << ob.getval() << '\n';
}

int main()
{
  cout << "16_const_destr_with_obj" << endl;

  myclass a(10);
  display(a);

  return 0;
}
