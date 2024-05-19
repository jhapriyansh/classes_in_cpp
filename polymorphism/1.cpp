#include <iostream>
using namespace std;
int main() {
  int a = 4;
  int *ptr = &a;
  cout << *ptr << endl;
  // new keyword
  int *p = new int(40);
  delete p;
  cout << *p << endl;

  int *arr = new int[4];
  // allocating contigious memory blocks.
  arr[0] = 10;
  arr[1] = 20;
  arr[2] = 30;
  arr[3] = 40;
  delete[] arr;
  cout << arr[0] << endl;
  cout << arr[1] << endl;
  cout << arr[2] << endl;
  cout << arr[3] << endl;
  return 0;
}