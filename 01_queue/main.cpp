#include <iostream>
using namespace std;

class queue {
  int q[100];
  int last, first; // <- first--<--<--<--last <-
public:
  queue();  // constructor
  ~queue(); // destructor
  void qput(int i);
  int qget();
};

queue::queue()
{
  last = first = 0;
  cout << "Queue initialized. \n";
}

queue::~queue()
{
  cout << "Queue destrcted. \n";
}

void queue::qput(int i)
{
  if (last == 100) {
    cout << "Queue is full. \n";
    return;  
  }
  
  last++;
  q[last] = i;
}

int queue::qget()
{
  if (first == last) {
    cout << "Queue is empty. \n";
    return 0;
  }
  first++;
  return q[first];
}

int main()
{
  queue a;


  // cout << a.qget() << " ";
 
  for (int i = 99; i > 0; i -= 2) {
    a.qput(i);
  } 

  for (int i = 1; i < 100; i++) {
    cout << a.qget() << " ";
  }
  cout << "\n";


  return 0;
}
