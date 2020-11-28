#include <iostream>
using namespace std;

class samp {
  int a, b;
public:
  samp(int n, int m) { a = n; b = m; }
  int get_a() { return a; }
  int get_b() { return b; }
};

int main()
{
  samp sampArr[3][2] = {
    samp(1, 2), samp(3, 4),
    samp(5, 6), samp(7, 8),
    samp(9, 10), samp(11, 12)
  };
  /* also we can create this like:
  *  samp sampArr[5] = { samp(1), samp(2), samp(4), samp(8), samp(16) };
  */ 
  int i;
  
  for ( i = 0; i < 3; i++) {
    cout << sampArr[i][0].get_a() << ' ';
    cout << sampArr[i][0].get_b() << "\n";
    cout << sampArr[i][1].get_a() << ' ';
    cout << sampArr[i][1].get_b() << "\n";
  }

  cout << "\n";

  return 0;
}
