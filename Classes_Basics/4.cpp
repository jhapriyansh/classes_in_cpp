#include <iostream>
using namespace std;

class Employee {
  int id;
  static int count;

public:
  void setData(void) {
    cout << endl << "Enter the id: ";
    cin >> id;
    count++;
  }
  void getData(void) {
    cout << "The id of this employee is: " << id
         << " and this is employee number: " << count << endl;
  }
  static void getCount(void) {
    // this static function can't access any variable without static attribute.
    cout << "The value of count is " << count << endl;
  }
};

int Employee::count =
    0; // Default value is zero, to assign any specific value, change here.

int main() {
  Employee test1, test2, test3;
  test1.setData();
  test1.getData();
  Employee::getCount();
  test2.setData();
  test2.getData();
  Employee::getCount();
  test3.setData();
  test3.getData();
  Employee::getCount();
  return 0;
}