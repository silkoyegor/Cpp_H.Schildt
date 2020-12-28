#include <iostream>
using namespace std;

class three_d {
public:
  int x, y, z;
  three_d(int a, int b, int c) { x = a; y = b; z = c; }
};

ostream &operator<<(ostream &stream, three_d obj){
  stream << obj.x << ", ";
  stream << obj.y << ", ";
  stream << obj.z << "\n";
  return stream;
}

istream &operator>>(istream &stream, three_d &obj){
  cout << "Введите координаты X, Y, Z: ";
  stream >> obj.x >> obj.y >> obj.z;
  return stream;
}

int main()
{
  cout << "35_input_output_system" << endl;

  three_d a(1, 2, 3), b(4, 5, 6), c(7, 8, 9);
  cout << a << b << c;

  cin >> a >> c;
  cout << a << b << c;
  return 0;
}
