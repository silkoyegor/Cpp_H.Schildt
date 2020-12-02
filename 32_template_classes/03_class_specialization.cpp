#include <iostream>
using namespace std;

template <class Templ>
class myclass {
  Templ x;
public:
  myclass(Templ a) {
    cout << "В теле обобщенного класса myclass.\n";
    x = a;
  }
  Templ getx() { return x; }
};

// Явная специализация для типа int.
template <>
class myclass<int> {
  int x;
public:
  myclass(int a) {
    cout << "В теле специализвации myclass<int>.\n";
    x = a * a;
  }
  int getx() { return x; }
};

int main()
{
  myclass<double> d(10.1);
  cout << "double: " << d.getx() << "\n\n";
  myclass<int> i(5);
  cout << "int: " << i.getx() << "\n";
  
  return 0;
}
