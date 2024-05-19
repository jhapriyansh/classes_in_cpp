#include <iostream>
using namespace std;

class Complex {
  int a, b;

public:
  // Creating a contructor
  // it's a special member functino with the same name as the class, used to
  // initialize members of its class.
  Complex(int x, int y); // contruction declaration.
  void getData(void) { cout << a << " + " << b << "i" << endl; }
};

Complex ::Complex(int x, int y) {
  a = x;
  b = y;
}

int main() {
  Complex c1(1, 2);
  c1.getData();
  return 0;
}

// properties of contructors;
// should be defined in the public section.
// automatically invoked when object is called.
// they can't return values and don't have a return type.
// it can have default arguements.
// we can't refer to addresses.