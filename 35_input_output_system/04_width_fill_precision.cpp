#include <iostream>
using namespace std;

/*
// streamsize width(streamsize len);
// char fill(char ch);
// streamsize precision(streamsize num);
*/

int main()
{
  cout.setf(ios::showpos);
  cout.setf(ios::scientific);
  cout << 123 << " " << 123.23 << "\n";
  
  cout.precision(2); // две цифры после десятичной точки
  cout.width(10); // все поле состоит из 10 символов
  cout << 123 << " ";
  cout.width(10);
  cout << 123.23 << "\n";

  cout.fill('#');
  cout.width(10);
  cout << 123 << " ";
  cout.width(10);
  cout << 123.23 << "\n";
  
  return 0;
}
