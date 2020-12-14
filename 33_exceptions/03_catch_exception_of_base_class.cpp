#include <iostream>
using namespace std;

class B {
};

class D: public B {
};

int main()
{
  D derived;

  try {
    throw derived;
  }
  catch(B b) {
    cout << "Перехват исключения базового класса.\n";
  }
  catch(D d) {
    cout << "Этот перехват не произойдет, ";
    cout << "пока не поставить это catch-выражение выше предыдущего";
  }

  return 0;
}
