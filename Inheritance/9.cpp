#include <iostream>
using namespace std;
/*
Syntax for initialization list in constructor:
constructor(arguement_list):initialization section
{
    assignment + other_code;
}
*/

class Test
{
    int b, a;

public:
    // Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : a(i), b(i + j * 2)
    // Test(int i, int j) : a(i), b(a + j)

    // Test(int i, int j) : b(i), a(i + b)
    // error as 'a' is declared first and b is not yet initialized.

    Test(int x, int y) : b(x), a(y + b)
    // not error as for this code b was initialized first.
    {
        cout << "A is: " << a << endl
             << "B is: " << b << endl
             << "Sum is: " << a + b << endl;
    }
};

int main()
{
    Test o1(3, 4);
    return 0;
}