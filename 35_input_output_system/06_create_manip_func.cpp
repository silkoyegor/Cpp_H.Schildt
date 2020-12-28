/* ostream &manip_name(ostream &stream)
// { 
//   код манипуляторной функции
//   return stream;
// }
*/  

#include <iostream>
#include <iomanip>
using namespace std;

ostream &setup(ostream &stream)
{
  stream.setf(ios::left);
  stream << setw(10) << setfill('$');
  return stream;
}

istream &prompt(istream &stream)
{
  cin >> hex;
  cout << "Введите число в шестнадцатиричном формате: ";
  return stream;
}

int main ()
{
  cout << 10 << " "<< setup << 10 << "\n";

  int i;
  cin >> prompt >> i;
  cout << i << "\n";

  return 0;
}
