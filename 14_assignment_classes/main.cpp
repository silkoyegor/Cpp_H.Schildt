#include <iostream>
using namespace std;

class myclass {
  int a, b;
public:
  void setab(int i, int j) { a = i, b = j; }
  void showab();
};

void myclass::showab()
{
  cout << "a = " << a << '\n';
  cout << "b = " << b << '\n';
}

int main()
{
  cerr << "14_assignment_classes" << endl;
  
  myclass ob1, ob2;

  ob1.setab(10, 20);
  ob2.setab(0, 0);
  cout << "object ob1 before assignment: \n";
  ob1.showab();
  cout << "object ob2 before assignment: \n";
  ob2.showab();
  cout << '\n';

  ob2 = ob1;

  cout << "object ob1 after assignment: \n";
  ob1.showab();
  cout << "object ob2 after assignment: \n";
  ob2.showab();
  cout << '\n';

  return 0;
}
