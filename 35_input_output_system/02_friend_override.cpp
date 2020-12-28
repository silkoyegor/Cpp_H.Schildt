#include <iostream>
using namespace std;

class three_d {
  int x, y, z;
public:
  three_d(int a, int b, int c) { x = a; y = b; z = c; }
  friend ostream &operator<<(ostream &stream, three_d obj);
  friend istream &operator>>(istream &stream, three_d &obj);
};

ostream &operator<<(ostream &stream, three_d obj){
  stream << obj.x << ", ";
  stream << obj.y << ", ";
  stream << obj.z << "\n";
  return stream;
}

istream &operator>>(istream &stream, three_d &obj){
  cout << "Введите X, Y, Z: ";
  stream >> obj.x >> obj.y >> obj.z;
  return stream;
}

int main()
{
  three_d a(1, 2, 3), b(2, 3, 4), c(3, 4, 5);
  cout << a << b << c;
  
  cin >> a >> b >> c;
  cout << a << b << c;

  return 0;
}
