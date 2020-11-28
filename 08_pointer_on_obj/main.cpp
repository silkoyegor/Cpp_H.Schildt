#include <iostream>
using namespace std;

class P_example {
  int num;
public:
  void set_num(int val) { num = val; }
  void show_num() { cout << num << "\n"; }
};

int main()
{
  cout << "08_pointer_on_obj" << endl;
  
  P_example ob[2], *p;

  ob[0].set_num(10);
  ob[1].set_num(20);

  p = &ob[0];
  p->show_num();

  p++; 
  p->show_num();

  p--; 
  p->show_num();

  return 0;
}
