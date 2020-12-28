#include <iostream> 
#include <iomanip> // для использования манипуляторов ввода/вывода
using namespace std;

int main()
{
  cout << setprecision(2) << 100.243 << endl;
  cout << setw(20) << "Hello everybody!" << endl;

  cout << setiosflags(ios::showpos);
  cout << setiosflags(ios::scientific);
  cout << 123 << " " << 123.23 << endl;

  char s[80];
  cin >> ws >> s;
  cout << s;

  return 0;
}
