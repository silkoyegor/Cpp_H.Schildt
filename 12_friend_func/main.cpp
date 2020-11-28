#include <iostream>
using namespace std;

const int IDLE = 0;
const int INUSE = 1;

class C2; // опережающее объявление
class C1 {
  int status; //IDLE, если сообщение неактивно
              // INUSE. если сообщение выведено на экран.
public:
  void set_status(int state);
  int idle(C2 b);
};

class C2 {
  int status;
public:
  void set_status(int state);
  friend int C1::idle(C2 b);
};

void C1::set_status(int state)
{
  status = state;
}

void C2::set_status(int state)
{
  status = state;
}

// Функция idle() - член класса C1 и "друг" класса C2.
int idle(C2 b)
{
  if (status || b.status) return 0;
  else return 1;
}

void show(C1 x,C2 y) {
  if (x.idle(y)) cout << "Экран свободен. \n";
  else cout << "Отображается сообщение.\n";
}

int main()
{
  cout << "12_friend_func" << endl;

  C1 var1;
  C2 var2;

  var1.set_status(IDLE);
  var2.set_status(IDLE);  

  show(var1, var2);

  var1.set_status(INUSE);

  show(var1, var2);

  return 0;
}
