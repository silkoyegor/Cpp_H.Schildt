#include <iostream>
using namespace std;

int main()
{
  cout << "33_exceptions" << endl;

  cout << "START\n";
  try {
    cout << "Try-block\n";
    throw 99; // генерирование ошибки
    cout << "Эта инструкция не будет выполнина";
  }
  catch (int i) {
    // перехват ошибки
    cout << "Перехват исключения. Его значение равно: ";
    cout << i << "\n";
  }
  cout << "END";

  return 0;
}
