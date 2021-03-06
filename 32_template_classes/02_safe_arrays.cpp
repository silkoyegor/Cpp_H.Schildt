#include <iostream>
#include <cstdlib>
using namespace std;

const int SIZE = 10;

template <class AType>
class atype {
  AType a[SIZE];
public:
  atype() {
    register int i;
    for (i = 0; i < SIZE; i++) a[i] = i;
  }
  AType &operator[](int i);
};

template <class AType>
AType &atype<AType>::operator[](int i)
{
  if (i < 0 || i > SIZE) {
    cout << "\n Значение индекса ";
    cout << i << " за пределами границ массива.\n";
  }
  return a[i];
}

int main ()
{
  atype<int> intob;
  atype<double> doubleob;
  int i;
  for (i = 0; i < SIZE; i++) intob[i] = i;
  for (i = 0; i < SIZE; i++) cout << intob[i] << " ";
  cout << '\n';
  for (i = 0; i < SIZE; i++) doubleob[i] = (double) i/3;
  for (i = 0; i < SIZE; i++) cout << doubleob[i] << " ";
  cout << "\n";
  intob[12] = 100;

  return 0;
}
