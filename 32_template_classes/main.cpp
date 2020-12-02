#include <iostream>
using namespace std;
const int SIZE = 220;

// Создание обобщенного класса queue
template <class QType>
class queue {
  QType q[SIZE];
  int sloc, rloc;
public:
  queue() { sloc = rloc = 0; }
  void qput(QType i);
  QType qget();
};


// Занесение объекта в очередь
template<class QType>
void queue<QType>::qput(QType i)
{
  if (sloc == SIZE) {
    cout << "Очередь переполнена.\n";
    return;
  }
  sloc++;
  q[sloc] = i;
}


// Извлечение объекта из очереди
template<class QType>
QType queue<QType>::qget()
{
  if (rloc == sloc) {
    cout << "Очередь пустаю\n";
  return 0;
  }
  rloc++;
  return q[rloc];
}


int main()
{
  cout << "32_template_classes" << endl;

  queue<int> a;
  queue<double> b;
  int x = 1;
  while (x < 10) {
    a.qput(x);
    b.qput(x + 0.21);
  }  

  cout << "\n";
  
  cout << a.qget() << "\n";
  cout << b.qget() << "\n"; 

  
  return 0;
}
