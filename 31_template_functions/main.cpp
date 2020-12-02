#include <iostream>
using namespace std;

template <class X> 
void swapargs(X &a, X &b)
{
  X temp;
  temp = a;
  a = b;
  b = temp;
}

template <typename X, typename Y>
void echo(X a, Y b) {
  cout << a << " " << b << "\n";
}

template <typename X, typename Y, typename Z>
void echo(X a, Y b, Z c) {
  cout << a << " " << b << " " << c << "\n";
}

template <class X>
void repeat(X data, int times)
{
  do {
    cout << data << "\n";
    times--;
  } while (times);
}

int main()
{
  cout << "31_templates_common_functions" << endl;

  int i = 10, j = 20;
  double x = 10.1, y = 23.3;
  char a = 'x', b = 'z';

  echo(i, j);
  swapargs(i, j);
  echo(i, j);

  echo(x, y);
  swapargs(x, y);
  echo(x, y);

  echo(a, b);
  swapargs(a, b);
  echo(a, b);

  echo(i, x, a);
  echo(j, y , b);

  cout << "\n";
  repeat("This is test", 3);
  repeat(100, 2);
  repeat(99.0/2, 4);

  return 0;
}
