#include <iostream>
#include <cstdlib>
using namespace std;

class myclass {
  int *p;
public:
  myclass (int i) {
    cout << "Выделение памяти, адресуемой указателем p.\n";
    p = new int;
    *p = i;
  }
  ~myclass() {
    cout << "Освобождение памяти, адресуемой указателем p.\n";
    delete p;
  }
  int getval() { return *p; }
};

// Вместо объекта ob передадим ссылку на него &ob
void display(myclass &ob) 
{
  cout << ob.getval() << '\n';
}

int main()
{
  cout << "17_assignment_obj_problems" << endl;

  myclass a(10);

  display(a);

  return 0;
}
