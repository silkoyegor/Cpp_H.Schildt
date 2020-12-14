#include <iostream>
using namespace std;

void Xhandler(int test)
{
  try {
    if (test == 0) throw test;  // генерирует int-исключение
    if (test == 1) throw 'a';   // генерирует char-исключение
    if (test == 2) throw 123.23;// генерирует double-исключение
  }
  catch(int i) { // перехватывает int-исключение
    cout << "Перехват " << i << '\n';
  }
  catch(...) { // перехватывает все остальные исключение
    cout << "Перехват-перехват!\n";
  }
}


// Эта функция может генерировать исключения
// только типа int, char, doble.
// Компилятор g++ предупреждает:
// warning: dynamic exception specifications are deprecated in C++11
void Xhandler2(int test) throw(int, char, double)
{
  try {
    if (test == 0) throw test;
    if (test == 1) throw 'b';
    if (test == 2) throw 321.21;
  }
  catch(int i) {
    cout << "Перехват int-исключения.\n";
  } 
  catch(char c){
    cout << "Перехват char-исключения.\n";
  }
  catch(double d){
    cout << "Перехват double-исключения.\n";
  }
}


int main()
{
  cout << "НАЧАЛО\n";

  Xhandler(0);
  Xhandler(1);
  Xhandler(2);

  cout << "СЕРЕДИНА\n";
  
  Xhandler2(0);
  Xhandler2(1);
  Xhandler2(2);

  cout << "КОНЕЦ\n";

  return 0;
}
