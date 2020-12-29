#include <iostream>
#include <fstream>
using namespace std;

class three_d {
  int x, y, z;
public:
  three_d(int a, int b, int c) { x = a; y = b; z = c; }
  friend ostream &operator<<(ostream &stream, three_d obj);
};

ostream &operator<<(ostream &stream, three_d obj) {
  stream << obj.x << ", ";
  stream << obj.y << ", ";
  stream << obj.z << "\n";
  return stream;
}

int main()
{
  three_d a(1, 2, 3), b(2, 3, 4), c(3, 4, 5);
  ofstream out("12_threed");
  if(!out) {
    cout << "Cannot open file.\n";
    return 1;
  }
  
  out << a << b << c;
  out.close();

  return 0;
}
