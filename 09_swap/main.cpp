#include <iostream>
using namespace std;

void swap(int& x, int& y) {
  int tmp = x;
  x = y;
  y = tmp;
};

int main()
{
  cout << "09_swap" << endl;

  int a = 5;
  int b = 12;
  
  swap(a, b);

  cout << "a = " << a << "\n";
  cout << "b = " << b << "\n";
  
  return 0;
}
