#include <iostream>
#include <cstring>
using namespace std;

class B_class {
  char author[80];
public:
  void put_author(char *s) { strcpy(author, s); }
  void show_author() { cout << author << "\n"; }
};

class D_class {
  char title[80];
public:
  void put_title(char *num) { strcpy(title, num); }
  void show_title() {
    cout << "Название: ";
    cout << title << "\n";
  }
};

int main()
{
  cout << "29_polimorphism_pointers" << endl;

  B_class *p;
  B_class B_ob;
  D_class *dp;
  D_class D_ob;
  p = &B_ob;
  p -> put_author("Эмиль Золя");
  
  p = &D_ob;
  p -> put_author("Уильям Шекспир");
  
  B_ob.show_author();
  D_ob.show author();
  cout << "\n";
  
  dp = &D_ob;
  dp -> put_title("Буря");
  p -> show_author();
  dp -> show_title();


  return 0;
}
