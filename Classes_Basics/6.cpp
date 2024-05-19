#include <iostream>
using namespace std;

class complex {
  int a;
  int b;

public:
  void setData(int v1, int v2) {
    a = v1;
    b = v2;
  }

  void setDataBySum(complex c1, complex c2) {
    a = c1.a + c2.a;
    b = c1.b + c2.b;
  }
  void getData(void) { cout << a << "+i" << b << endl; }
};

int main() {
  complex c1, c2, c3;
  c1.setData(1, 2);
  c1.getData();
  c2.setData(3, 4);
  c2.getData();
  c3.setDataBySum(c1, c2);
  c3.getData();
  return 0;
}