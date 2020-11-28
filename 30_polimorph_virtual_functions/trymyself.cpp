#include <iostream>
using namespace std;

class animal {
public:
  virtual void say() { cout << "I'm animal\n"; };
};

class cat : public animal {
public:
  void say() { cout << "I'm a cat\n"; }
};

class dog : public animal {
public:
  void say() { cout << "I'am a dog! Wooof\n"; }
};


void use_pointer (animal &object) {
  animal *pointer;
  pointer = &object;
  pointer -> say();
}

int main()
{

  animal creature;
  animal *pointer;

  pointer = &creature;
  pointer -> say();
  
  cat kitty;
  pointer = &kitty;
  pointer -> say();

  use_pointer(kitty);
  dog doggy;
  
  use_pointer(doggy);
  use_pointer(creature);
  return 0;
}
