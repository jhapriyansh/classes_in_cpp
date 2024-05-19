#include <iostream>
using namespace std;

class c2;

class c1 {
  int val;

public:
  friend void exchange(c1 &, c2 &);
  void setData(int x) { val = x; }
  void getData() { cout << val; }
};

class c2 {
  int val;

public:
  friend void exchange(c1 &, c2 &);
  void setData(int y) { val = y; }
  void getData() { cout << val; }
};

void exchange(c1 &x, c2 &y) {
  int temp = x.val;
  x.val = y.val;
  y.val = temp;
}

int main() {
  c1 a;
  c2 b;
  a.setData(30);
  b.setData(20);
  a.getData();
  cout << " ";
  b.getData();
  cout << endl;
  exchange(a, b);
  a.getData();
  cout << " ";
  b.getData();
  return 0;
}