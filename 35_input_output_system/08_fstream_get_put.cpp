#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[])
{
  char ch;
  if(argc!=2) {
    cout << "Применение: имя_программы <имя_файла> \n";
    return 1;
  }
  
  char *p = "Hello from Odesa city";
  ofstream out(argv[1], ios::out | ios::binary);
  if (!out) {
    cout << "Не удается открыть файл для записи. \n";
    return 1;
  }
  
  while (*p) out.put(*p++);
  out.close();
  

  //считывание из файла 
  ifstream in(argv[1], ios::in | ios::binary);
  if (!in) {
    cout << "Не удается открыть файл для чтения \n";
    return 1;
  }
  
  while (in) {
    // При достижении конца файла потоковый объект in примет значение false.
    in.get(ch);
    if(in) cout << ch;
  }
  in.close();

  return 0;
} 
