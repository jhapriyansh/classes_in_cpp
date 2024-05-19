#include <iostream>
using namespace std;

class Complex {
  int a, b;

public:
  Complex(int, int);
  void getData(void) { cout << a << " + " << b << "i" << endl; }
};

Complex ::Complex(int x, int y) {
  a = x;
  b = y;
}

int main() {
  // implicit call
  Complex a(2, 3);
  // explicit call
  Complex b = Complex(5, 7);
  a.getData();
  b.getData();
  return 0;
}