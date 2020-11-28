#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class timer{
  int seconds;
public:
  // секунды, задаваемые в виде строки
  timer(char *t) { seconds = atoi(t); }

  // секунды, задаваемые в виде целого числа
  timer(int t) { seconds = t; }

  // время, задаваемое в минутах и секундах
  timer(int min, int sec) { seconds = min*60 + sec; }

  void run() {
    clock_t t1;
    t1 = clock();
    while ((clock()/CLOCKS_PER_SEC - t1/CLOCKS_PER_SEC) < seconds);
    cout << seconds << " sec already done \n"; // \a - звуковой сигнал
  }
};


int main()
{
  cout << "13_peregryzka_constructorov_timer" << endl;

  timer a(3);
  a.run();
  
  cout << "Введите кол-во секунд: ";
  char str[80];
  cin >> str;
  timer b(str);
  b.run();

  cout << "Введите минуты и секунды: ";
  int min, sec;
  cin >> min >> sec;
  timer c(min, sec);
  c.run();

  return 0;
}
