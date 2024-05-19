#include <iostream>
using namespace std;

// destructor never takes an arguement nor it returns any value.

int counter = 0;
class num {
public:
  num() {
    counter++;
    cout << "Constructor called for object number: " << counter << endl;
  }
  ~num() {
    cout << "Destructor called for object number: " << counter << endl;
    counter--;
  }
};

int main() {
  num a, b, c, d;
  return 0;
}