#include <iostream>
#include <new>
using namespace std;

int main()
{
  int *p, i;
  
  try {
    p = new int[32]; // запрос на выделение памяти
                     // для 32-элементного int-массива
  }
  catch(bad_alloc xa) {
    cout << "Память не выделена.\n";
    return 1;
  }

  for(i = 0; i < 32; i++) p[i] = i;

  for(i = 0; i < 32; i++) cout << p[i] << " ";
  
  delete [] p; // освобождение памяти

  return 0;
}
